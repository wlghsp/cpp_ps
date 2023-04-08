#include <iostream>
#define MAX_N 99
#define MAX_T 100000
#define DIR_NUM 4

using namespace std;
/*
이동경로상에 있는 모든 숫자 더하기
내 풀이
*/

int n, t;
int x, y;
string str;
int grid[MAX_N][MAX_N];

// 동, 남, 서, 북
int dx[DIR_NUM] = {0, 1, 0, -1};
int dy[DIR_NUM] = {1, 0, -1, 0};
int cnt = 0;

int dir_num = 3; // 0: 오른쪽, 1: 아래쪽, 2: 왼쪽, 3: 위쪽

bool InRange(int x, int y) {
  return (0 <= x && x < n && 0 <= y && y < n);
}

void Input() {
  cin >> n >> t >> str;
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n; j++)
    {
      cin >> grid[i][j];
    }
  }
}

void Simulate(){
   for (int i = 0; i < t; i++)
  {
    char c = str[i];
    // L 왼쪽 90도 방향 전환
    // R 오른쪽 90도 방향 전환
    // F 해당 방향으로 한칸 이동
    if (c == 'L')
    {
      dir_num = (dir_num - 1 + 4) % 4;
    } else if (c == 'R') {
      dir_num = (dir_num + 1) % 4;
    } else if (c == 'F') {
      int nx = x + dx[dir_num];
      int ny = y + dy[dir_num];
      if (InRange(nx, ny))
      {
        cnt += grid[nx][ny];
        x = nx;
        y = ny; 
      }
    }
  }
}


int main()
{
  freopen("input.txt", "rt", stdin);
  
  Input();

  x = n / 2, y = n / 2;
  cnt += grid[x][y];
  
  Simulate();
  cout << cnt;
  return 0;
}

