#include <iostream>
#include <string>
using namespace std;
/*
재귀함수를 이용한 별 출력 2 : 내 풀이
*/

void printStars(int n)
{
  if (n == 0)
  {
    return;
  }
  for(int i = 0; i < n; i++)
    cout << "* ";
  cout << '\n';
  printStars(n - 1);
  for(int i = 0; i < n; i++)
    cout << "* ";
  cout << '\n';
}

int main()
{
  freopen("input.txt", "rt", stdin);
  int n;
  cin >> n;
  printStars(n);
  return 0;
}
