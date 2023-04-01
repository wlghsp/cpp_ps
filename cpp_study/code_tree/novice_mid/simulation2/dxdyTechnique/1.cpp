#include <iostream>

using namespace std;
/*
dx, dy 테크닉
*/

int main()
{
  /*
    0 이 주어지면 동쪽
    1 이 주어지면 남쪽
    2 이 주어지면 서쪽
    3 이 주어지면 북쪽 
  */
  int dir_num = 2; // 주어진 방향이 서쪽인 경우
  int x = 1, y = 5; // 현재 위치가 (1, 5)인 경우
  int dx[4] = {1, 0, -1, 0};
  int dy[4] = {0, -1, 0, 1};
  int nx, ny;
  nx = x + dx[dir_num];
  ny = y + dy[dir_num];

  return 0;
}