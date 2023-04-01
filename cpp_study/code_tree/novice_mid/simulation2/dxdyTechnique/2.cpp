#include <iostream>
#define MAX_N 100
using namespace std;
/*
방향에 맞춰 이동
내 풀이
*/

int n;
// 시계방향 동, 남, 서, 북 순으로 정의함 
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, -1, 0, 1};

int main()
{
  freopen("input.txt", "rt", stdin);
  cin >> n;
  int x = 0, y = 0;
  
  for (int i = 0; i < n; i++)
  {
    char dir;
    int dis, idx;
    cin >> dir >> dis;
  
    if (dir == 'N') idx = 3;
    else if (dir == 'W') idx = 2;
    else if (dir == 'S') idx = 1;
    else idx = 0;

    x += dx[idx] * dis;
    y += dy[idx] * dis;
  }

  cout << x << " " << y;
  return 0;
}