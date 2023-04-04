#include <iostream>
#define DIR_NUM 4
using namespace std;
/*
되돌아오기 2
내 풀이
*/

string dirs;
int x = 0, y = 0;
int curr_dir = 3;
int elapsed_time = 0;

// 시계방향 동, 남, 서, 북 순으로 정의함 
int dx[DIR_NUM] = {1, 0, -1, 0};
int dy[DIR_NUM] = {0, -1, 0, 1};


int elapsed_time;

int main()
{
  freopen("input.txt", "rt", stdin);
  cin >> dirs;
 
  int size = dirs.size();

  bool found = false;

  for (int i = 0; i < size; i++)
  {
    char c_dir = dirs[i];
    // 반시계 방향 회전
    if(c_dir == 'L') 
      curr_dir = (curr_dir - 1 + 4) % 4;
    // 시계방향 90도 회전
    else if (c_dir == 'R') 
      curr_dir = (curr_dir + 1) % 4;
    else if (c_dir == 'F') {
      x += dx[curr_dir];
      y += dy[curr_dir];
    }
    
    elapsed_time++;
    
    if(x == 0 && y == 0) {
      found = true;
      break;
    }

  }

  cout << (found ? elapsed_time : -1);
  return 0;
}

