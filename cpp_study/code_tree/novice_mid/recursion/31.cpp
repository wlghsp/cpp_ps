#include <iostream>
#include <string>
using namespace std;
/*
반복 출력하기 2 : 내 풀이
*/

void printHello(int n)
{
  if (n == 0)
  {
    return;
  }
  printHello(n - 1);
  cout << "HelloWorld" << '\n';
  
}

int main()
{
  freopen("input.txt", "rt", stdin);
  int n;
  cin >> n;
  printHello(n);
  return 0;
}
