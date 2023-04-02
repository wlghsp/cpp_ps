#include <iostream>
#define MAX_N 100
using namespace std;
/*
조건에 따라 방향이 변하는 경우
*/

int n = 5;
int x = 1, y = 2;
int dir_num = 2;

int dx[4] = {0, 1, -1, 0};
int dy[4] = {1, 0, 0, -1};

bool InRange(int x, int y) {
  return (0 <= x && x < n && 0 <= y && y < n);
}

int GetDir(char a) {
  if(a == 'R') return 0;
  else if(a == 'D') return 1;
  else if(a == 'U') return 2;
  else return 3;
}

int main()
{
  char c_dir = 'D';
  int move_dir = GetDir(c_dir);

  while (true)
  {
    int nx = x + dx[dir_num];
    int ny = y + dy[dir_num];
    // check whether position is out of grid
    if(!InRange(nx, ny)) {
      // change direction
      dir_num = 3 - dir_num; 
    }

    // move
    x = x + dx[dir_num];
    y = y + dy[dir_num];
  }
  return 0;
}

