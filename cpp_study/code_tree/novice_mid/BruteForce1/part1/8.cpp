#include <iostream>
#include <climits>
#define MAX_N 20
using namespace std;

/*
최고의 13위치
내 풀이
*/

int n;
int a[MAX_N][MAX_N];
int ans;

void Input()
{
  cin >> n;
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n; j++)
      cin >> a[i][j];
  }
}

int Search()
{
  int max_cnt = INT_MIN;
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n - 2; j++)
    {
      max_cnt = max(max_cnt, a[i][j] + a[i][j + 1] + a[i][j + 2]);
    }
  }
  return max_cnt;
}

int main()
{
  freopen("input.txt", "rt", stdin);

  Input();

  ans = Search();

  cout << ans;

  return 0;
}