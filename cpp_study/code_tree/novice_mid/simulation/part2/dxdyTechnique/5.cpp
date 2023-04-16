#include <iostream>
#define MAX_N 100
using namespace std;
/*
격자에서의 dx, dy
*/

int a[5][5] = 
    {{0, 0, 0, 1, 0},
     {0, 1, 1, 1, 0},
     {0, 0, 0, 0, 1},
     {1, 0, 1, 1, 1},
     {1, 0, 1, 1, 0}};

int x = 2, y = 4;
int dx[4] = {0, 1, 0, -1}, dy[4] = {1, 0, -1, 0};


bool InRange(int x, int y) {
  return (0 <= x && x < 5 && 0 <= y && y < 5);
}


int main()
{
  int cnt = 0;
  for (int dir_num = 0; dir_num < 4; dir_num++)
  {
    int nx = x + dx[dir_num];
    int ny = y + dy[dir_num];

    if(InRange(nx, ny) && a[nx][ny] == 1) cnt++;
  }

  cout << cnt;
  
  return 0;
}