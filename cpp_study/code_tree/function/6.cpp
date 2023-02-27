#include <iostream>
#include <algorithm>
using namespace std;

int GCD(int n, int m) { 
    int gcd = 0;
    for (int i = 1; i <= min(n,m); i++)
    {
      if (n % i == 0 && m % i == 0)
      {
        gcd = i;
      }
      
    }
     
    return gcd;
}


int main()
{
  freopen("input.txt", "rt", stdin);
  int n, m;
  cin >> n >> m;
  int result = GCD(n, m);
  cout << result;
  return 0;
}