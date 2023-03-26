#include <iostream>
#include <string>
using namespace std;
/*
각 자리 숫자의 제곱: 내 풀이
*/
int multiply(int n)
{
  if (n < 10)
  {
    return n * n;
  }
  return multiply(n / 10) + ((n % 10) * (n % 10));
}

int main()
{
  freopen("input.txt", "rt", stdin);
  int n;
  cin >> n;
  cout << multiply(n);
  return 0;
}
