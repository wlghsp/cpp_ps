#include <iostream>
#include <string>
using namespace std;
/*
1이 되는 순간까지: 내 풀이
*/

int cnt = 0;

int UntilOne(int n)
{ 
  if (n == 1)
  {
    return cnt;
  }
  
  cnt++;
  
  return n % 2 == 0 ? UntilOne(n / 2) : UntilOne(n / 3);
}

int main()
{
  freopen("input.txt", "rt", stdin);
  int n;
  cin >> n;
  cout << UntilOne(n);
  return 0;
}
