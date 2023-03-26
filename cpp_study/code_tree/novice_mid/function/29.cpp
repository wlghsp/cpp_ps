#include <iostream>
#include <string>
using namespace std;
/*
나누고 빼면서 합하기 : 내 풀이
*/

#define MAX_N 100
int n, m;
int arr[MAX_N+1];

int Process()
{
  int result = arr[m - 1];
  while (m != 1)
  {
    if (m % 2 != 0)
    {
      m -= 1;
    }
    else
    {
      m /= 2;
    }
    result += arr[m - 1];
  }
  return result;
}

int main()
{
  freopen("input.txt", "rt", stdin);
  cin >> n >> m;
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }
  cout << Process();
  return 0;
}
