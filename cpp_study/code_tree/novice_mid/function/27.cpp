#include <iostream>
#include <string>
using namespace std;

/*
두 정수에 대한 연산값 2 : 내 풀이
*/

// call by reference를 구현합니다.
void Process(int &a, int &b) {
  if (a > b)
  {
    b += 10;
    a *= 2;
  } else {
    a += 10;
    b *= 2;
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