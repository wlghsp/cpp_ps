#include <iostream>
using namespace std;
/*
재귀함수를 이용한 3n + 1 수열
: 내 풀이
*/

int UntilOne(int n)
{
  if (n == 1)
  {
    return 0;
  }
  if (n % 2 == 0)
  {
    return UntilOne(n / 2) + 1;
  } else {
    return UntilOne(n * 3 + 1) + 1;
  }
  
}

int main()
{
  freopen("input.txt", "rt", stdin);
  int n;
  cin >> n;
  cout << UntilOne(n);
  return 0;
}
