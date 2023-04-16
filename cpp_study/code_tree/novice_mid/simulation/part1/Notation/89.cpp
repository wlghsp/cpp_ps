#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
/*
진수 to 진수
*/


int main() {
  freopen("input.txt", "rt", stdin);
  int a, b;
  string n;
  cin >> a >> b >> n;
  int num = 0;
  // 십진수 변환
  for(int i =0; i < n.size(); i++) {
      num = num * a + (n[i] - '0');
  }
  int digits[20];
  int cnt = 0;

  // b 진수 변환
  while (true)
  {
    if (num < b)
    {
      digits[cnt++] = num;
      break;
    }
    digits[cnt++] = num % b;
    num /= b;
  }

  // 진수 배열을 뒤집어 b진수 출력
  for(int i = cnt -1; i >= 0; i--)
    cout << digits[i];

  return 0; 
}