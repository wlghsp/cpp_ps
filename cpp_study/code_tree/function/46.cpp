#include <iostream>
using namespace std;
/*
이상한 수열
: 내 풀이
*/

int Sequence(int n)
{
  if (n == 1)
  {
    return 1;
  }
  if (n == 2)
  {
    return 2;
  }
  return Sequence(n / 3)  + Sequence(n - 1);
}

int main()
{
  freopen("input.txt", "rt", stdin);
  int n;
  cin >> n;
  cout << Sequence(n);
  return 0;
}
