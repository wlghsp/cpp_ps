#include <iostream>
#include <string>
using namespace std;
/*
재귀함수를 이용한 피보나치 수: 내 풀이
*/


int Fibo(int n)
{ 
  if (n <= 2)
  {
    return 1;
  }
  
  return Fibo(n - 1) + Fibo(n - 2);
}

int main()
{
  freopen("input.txt", "rt", stdin);
  int n;
  cin >> n;
  cout << Fibo(n);
  return 0;
}
