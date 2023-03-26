#include <iostream>
#include <string>
using namespace std;
/*
홀수 짝수에 따른 출력값
: 내 풀이
*/


int Sum1(int n) {
    if (n == 2) return n;
    if (n % 2 == 0)
    {
      return Sum1(n-1) + n;
    } else {
      return Sum1(n-1);
    }
}

int Sum2(int n) {
    if (n == 1) return n;
    if (n % 2 == 0)
    {
      return Sum2(n-1);
    } else {
      return Sum2(n-1) + n;
    }
}


int main()
{
  freopen("input.txt", "rt", stdin);
  int n;
  cin >> n;
  if (n % 2 == 0) {
    cout << Sum1(n);
  }
  else {
    cout << Sum2(n);
  }
  return 0;
}
