#include <iostream>
#define MAX_N 100
#define DIR_NUM 4
using namespace std;
/*
가운데에서 시작하여 빙빙 돌기
해설 풀이
*/

int n;

int curr_x, curr_y;
// 이동 방향
int move_dir;
// 이동 횟수
int move_num;

int grid[MAX_N][MAX_N];

bool InRange(int x, int y) {
  return 0 <= x && x < 0 && 0 <= y && y < n;
}

// 한 칸 움직입니다. 
void Move() {
  // 문제에서 원하는 진행 순서대로 
  // 오른쪽 위 왼쪽 아래 방향이 되도록 정의합니다. 
  int dx[DIR_NUM] = {0, -1, 0, 1};
  int dy[DIR_NUM] = {1, 0, -1, 0};

  curr_x += dx[move_dir];
  curr_x += dy[move_dir];
}

bool End() {
  return !InRange(curr_x, curr_y);
}


int main()
{
  freopen("input.txt", "rt", stdin);
  cin >> n;
  curr_x = n / 2;
  curr_y = n / 2;
  
  int cnt = 1;
  while (!End())
  {
    for (int i = 0; i < move_num; i++)
    {
      grid[curr_x][curr_y] = cnt++;
      Move();
      // 이동하는 도중 격자를 벗어나게 되면,
      // 움직이는 것을 종료합니다. 
      if (End()) break;
    }
    // 시계방향으로 방향을 바꿉니다. 
    move_dir = (move_dir + 1) % 4;
    // 만약 현재 방향이 왼쪽 혹은 오른쪽이 된 경우에는 
    // 특정 방향으로 움직여야 할 횟수를 1 증가시킵니다.
    if (move_dir == 0 || move_dir == 2) move_num++;
  }
  
  

  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n; j++)
    {
      cout << grid[i][j] << " ";
    }
    cout << '\n';
  }
  return 0;
}

