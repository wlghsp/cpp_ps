#include <iostream>
#include <string>
using namespace std;
/*
특정 구간의 합 : 내 풀이
*/

#define MAX_N 100
int n, m;
int arr[MAX_N+1];

int GetSum(int a, int b)
{
  int result = 0;
  for (int i = a; i <= b; i++)
  {
    result += arr[i];
  }
  return result;
}

int main()
{
  freopen("input.txt", "rt", stdin);
  cin >> n >> m;
  for (int i = 1; i <= n; i++)
  {
    cin >> arr[i];
  }
  int a1, a2;
  for (int i = 0; i < m; i++)
  {
    cin >> a1 >> a2;
    int sum = GetSum(a1, a2);
    cout << sum << '\n';
  }
  return 0;
}
