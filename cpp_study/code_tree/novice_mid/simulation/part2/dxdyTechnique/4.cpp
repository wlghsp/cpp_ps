#include <iostream>
#define MAX_N 100
using namespace std;
/*
문자에 따른 명령 2
내 풀이
*/

// 시계방향 동, 남, 서, 북 순으로 정의함 
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, -1, 0, 1};
string direction;

int main()
{
  freopen("input.txt", "rt", stdin);
  int x = 0, y = 0;
  cin >> direction;
  int size = direction.size();
  int curr_dir = 3;
  for(int i =0; i < size; i++) {
    char c = direction[i];
    if(c == 'L') curr_dir = (curr_dir - 1 + 4) % 4; 
    else if (c == 'R') curr_dir = (curr_dir + 1) % 4; 
    else if (c == 'F') {
      x += dx[curr_dir];
      y += dy[curr_dir];
    }
  }
  cout << x << " " << y;

  return 0;
}