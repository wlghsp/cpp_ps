#include <iostream>
#include <string>
using namespace std;

/*
두 정수에 대한 연산값 : 내 풀이
*/

// call by reference를 구현합니다.
void Process(int &a, int &b) {
  if (a > b)
  {
    a += 25;
    b *= 2;
  } else {
    b += 25;
    a *= 2;
  }
}

int main()
{
  freopen("input.txt", "rt", stdin);
  int a, b;
  cin >> a >> b;
  Process(a, b);
  cout << a << " " << b;
  return 0;
}