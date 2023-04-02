#include <iostream>
#define MAX_N 50
#define MAX_T 100
#define DIR_NUM 4
using namespace std;
/*
작은 구슬의 이동
내 풀이
*/

// 시계방향 동, 남, 서, 북 순으로 정의함 
int n, t, r, c;
char d;
int dx[DIR_NUM] = {0, 1, -1, 0};
int dy[DIR_NUM] = {1, 0, 0, -1};

bool InRange(int x, int y) {
  return (1 <= x && x <= n && 1 <= y && y <= n);
}

int GetDir(char dir) {
  if(dir == 'R') return 0;
  else if(dir == 'D') return 1;
  else if(dir == 'U') return 2;
  else return 3;
}


int main()
{
  freopen("input.txt", "rt", stdin);
  cin >> n >> t >> r >> c >> d;
  // r행 c열에 놓이고 d 방향
  int move_dir = GetDir(d);
  while (t--)
  {
    int nx = r + dx[move_dir];
    int ny = c + dy[move_dir];

    // 다음 위치가 범위 안이 아닌 경우 방향을 바꾼다.
    if(!InRange(nx, ny)) {
      move_dir = 3 - move_dir;
      t--;
    }

    // 방향을 바꾼 후 시간이 종료되었다면 반복문을 나온다.
    if(t <= 0) break;

    r += dx[move_dir];
    c += dy[move_dir];

  }
  

  cout << r << " " << c;
  return 0;
}