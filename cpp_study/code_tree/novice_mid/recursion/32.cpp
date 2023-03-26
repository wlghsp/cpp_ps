#include <iostream>
#include <string>
using namespace std;
/*
숫자 차례로 출력하기 : 내 풀이
*/
int num;
void PrintNumbers(int n)
{
  if (n == 0)
  {
    return;
  }

  PrintNumbers(n-1);
  cout << n << " ";
}

void PrintNumbers1(int n)
{
  if (n == 0)
  {
    return;
  }

  cout << n << " ";
  PrintNumbers1(n-1);
}



int main()
{
  freopen("input.txt", "rt", stdin);
  cin >> num;
  PrintNumbers(num);
  cout << '\n';
  PrintNumbers1(num);
  return 0;
}
