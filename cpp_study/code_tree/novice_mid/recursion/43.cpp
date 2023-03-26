#include <iostream>
using namespace std;
/*
큰 숫자 자리수의 합
: 내 풀이
*/

int GetSum(int n)
{
  if (n < 10)
  {
    return n;
  }
  return GetSum(n / 10) + n % 10;
}

int main()
{
  freopen("input.txt", "rt", stdin);
  int a, b, c;
  cin >> a >> b >> c;
  cout << GetSum(a * b * c);
  return 0;
}
