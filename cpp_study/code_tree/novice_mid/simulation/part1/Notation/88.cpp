#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
/*
십진수와 이진수 2
*/


int main() {
  freopen("input.txt", "rt", stdin);
  string n;
  cin >> n;
  int num = 0;
  for(int i = 0; i < n.length(); i++) {
    num = num * 2 + (n[i] - '0');
  }
  num = num * 17;
  int digits[20];
  int cnt = 0;
  while (true)
  {
    if (num < 2)
    {
      digits[cnt++] = num;
      break;
    }
    digits[cnt++] = num % 2;
    num /= 2;
  }

  for(int i = cnt -1; i >= 0; i--)
    cout << digits[i];

  return 0; 
}