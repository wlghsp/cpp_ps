#include <iostream>
#include <string>
using namespace std;
/*
재귀함수의 꽃 : 내 풀이
*/

void printNums(int n)
{
  if (n == 0)
  {
    return;
  }
  cout << n << " ";
  printNums(n - 1);
  cout << n << " ";
  
}



int main()
{
  freopen("input.txt", "rt", stdin);
  int n;
  cin >> n;
  printNums(n);
  return 0;
}
