#include <iostream>
using namespace std;
/*
100으로 나눈 나머지의 수열
: 내 풀이
*/

int GetNthVal(int n)
{
  if (n == 1)
  {
    return 2;
  }
  if (n == 2)
  {
    return 4;
  }
  return (GetNthVal(n -1) * GetNthVal(n - 2)) % 100;
}

int main()
{
  freopen("input.txt", "rt", stdin);
  int n;
  cin >> n;
  cout << GetNthVal(n);
  return 0;
}
