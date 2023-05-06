#include <iostream>
#define MAX_N 100
#define DIR_NUM 4
using namespace std;
/*
1이 3개 이상 있는 위치
내 풀이
*/

// 시계방향 동, 남, 서, 북 순으로 정의함 
int n;
int dx[DIR_NUM] = {1, 0, -1, 0};
int dy[DIR_NUM] = {0, -1, 0, 1};
int a[MAX_N][MAX_N];

bool InRange(int x, int y) {
  return (0 <= x && x < n && 0 <= y && y < n);
}

bool MoreThanThreeOne(int x, int y) {
  int cnt = 0;
  for (int i = 0; i < DIR_NUM; i++)
  {
    int nx = x + dx[i];
    int ny = y + dy[i];
    if(InRange(nx, ny) && a[nx][ny] == 1) cnt++;
  }
  return cnt >= 3;
}

int main()
{
  freopen("input.txt", "rt", stdin);
  cin >> n;
  
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n; j++)
    {
      cin >> a[i][j];
    }
  }

  int ans = 0;
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n; j++)
    {
      if(MoreThanThreeOne(i, j)) {
        ans++;
      }
    }
  }
  
  cout << ans;

  return 0;
}