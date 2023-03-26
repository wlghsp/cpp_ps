#include <iostream>
using namespace std;


bool isPrimeNum(int n) {
  for (int i = 2; i < n; i++)
  {
    if(n % i == 0) return false;
  }
  return true; 
}


int getSumOfPrimeNums(int a, int b) { 
    int sum = 0;
    for (int i = a; i <= b; i++)
    {
      if(isPrimeNum(i)){
        sum += i;
      }
    }
    return sum;
}

int main()
{
  freopen("input.txt", "rt", stdin);
  int a, b;
  cin >> a >> b;
  cout << getSumOfPrimeNums(a, b);
  return 0;
}