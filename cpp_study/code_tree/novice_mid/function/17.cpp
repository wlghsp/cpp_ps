#include <iostream>
using namespace std;


bool isPrimeNumber(int n) {
  for (int i = 2; i < n; i++)
  {
    if(n % i == 0) return false;
  }
  return true;
}


int main()
{ 
  freopen("input.txt", "rt", stdin);
  int a, b;
  cin >> a >> b;
  int cnt = 0;
  for (int i = a; i <= b; i++)
  {
    if(isPrimeNumber(i) && (i / 10 + i % 10) % 2 == 0) cnt++;
  }
  cout << cnt;
  return 0;
}