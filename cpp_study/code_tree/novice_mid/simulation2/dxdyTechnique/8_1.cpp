#include <iostream>
#include <string>
#define ASCII_NUM 128
#define DIR_NUM 4
using namespace std;
/*
작은 구슬의 이동
해설 풀이
*/

// 시계방향 동, 남, 서, 북 순으로 정의함 
int n, t;
int x, y, dir;
int mapper[ASCII_NUM];

int dx[DIR_NUM] = {0, 1, -1, 0};
int dy[DIR_NUM] = {1, 0, 0, -1};

bool InRange(int x, int y) {
  return (0 <= x && x < n && 0 <= y && y < n);
}

void Simulate() {
  while (t--)
  {
    int nx = x + dx[dir];
    int ny = y + dy[dir];

    // 범위 안에 들어온다면 그대로 진행합니다. 
    if(InRange(nx, ny)) {
      x = nx;
      y = ny;
    } 
    // 벽에 부딪힌다면, 방향을 바꿔줍니다. 
    else {
      dir = 3 - dir;
    }
  }
  
}


int main()
{
  freopen("input.txt", "rt", stdin);
  cin >> n >> t ;
  mapper['R'] = 0;
  mapper['D'] = 1;
  mapper['U'] = 2;
  mapper['L'] = 3;

  char c_dir;
  cin >> x >> y >> c_dir;
  // 좌표가 0 부터 시작하게 변경함. 
  x--; 
  y--;

  dir = mapper[c_dir];

  Simulate(); 
  
  cout << x + 1 << " " << y + 1;
  
  return 0;
}