#include <iostream>
#include <string>
using namespace std;
/*
Factorial
: 내 풀이
*/


int Factorial(int n) {
    if (n == 0) return 1;
    return Factorial(n-1) * n;
}


int main()
{
  freopen("input.txt", "rt", stdin);
  int n;
  cin >> n;
  cout << Factorial(n);
  return 0;
}
