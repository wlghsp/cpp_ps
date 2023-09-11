#include <iostream>
#include <string>
#define MAX_N 100
#define MAX_NUM 100000
using namespace std;
/*
달리자
내 풀이
*/

int n;
int a[MAX_N + 1];
int b[MAX_N + 1];

void Input()
{
  cin >> n;
  for (int i = 1; i <= n; i++)
  {
    cin >> a[i];
  }
  for (int i = 1; i <= n; i++)
  {
    cin >> b[i];
  }
}


int main()
{
  int ans = 0;
  freopen("input.txt", "rt", stdin);
  Input();
  for (int i = 1; i <= n; i++)
  {
    if (a[i] > b[i])
    {
      ans += a[i] - b[i];
      a[i + 1] += a[i] - b[i];
    }
    
  }
  
  cout << ans;

  return 0;
}