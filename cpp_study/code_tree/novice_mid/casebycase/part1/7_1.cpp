#include <iostream>
#include <string>
#define MAX_N 100
#define MAX_NUM 100000
using namespace std;
/*
달리자
해설 풀이
*/

int n;
int a[MAX_N];
int b[MAX_N];

void Input()
{
  cin >> n;
  for (int i = 0; i < n; i++)
  {
    cin >> a[i];
  }
  for (int i = 0; i < n; i++)
  {
    cin >> b[i];
  }
}


int main()
{
  int ans = 0;
  freopen("input.txt", "rt", stdin);
  Input();
  for (int i = 0; i < n; i++)
  {
    if (a[i] > b[i])
    {
      int num = a[i] - b[i];
      a[i] -= num;
      ans += num;
      a[i + 1] += num;
    }
    
  }
  
  cout << ans;

  return 0;
}