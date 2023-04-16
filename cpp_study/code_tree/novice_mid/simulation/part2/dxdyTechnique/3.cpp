#include <iostream>
#define MAX_N 100
using namespace std;
/*
방향 회전을 위한 dx, dy 정의 방법
*/


int main()
{
  int dir_num = 3;
  int x = 1, y = 5;
  int dx[4] = {1, 0, -1, 0};
  int dy[4] = {0, -1, 0,  1};
  int nx, ny;

  // rotate clockwise direction
  dir_num = (dir_num + 1) % 4;

  // couterclockwise direction
  dir_num = (dir_num - 1 + 4) % 4;
  
  nx = x + dx[dir_num];
  ny = y + dy[dir_num];
  
  return 0;
}