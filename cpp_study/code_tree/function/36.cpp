#include <iostream>
#include <string>
using namespace std;
/*
1부터 특정 수까지의 합 2 : 내 풀이
*/
int GetSum(int n)
{
  if (n == 1)
  {
    return 1;
  }
  return n + GetSum(n - 1);
}

int main()
{
  freopen("input.txt", "rt", stdin);
  int n;
  cin >> n;
  cout << GetSum(n);
  return 0;
}
