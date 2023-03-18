#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
/*
2진법으로 표현하기
*/


int main() {
  freopen("input.txt", "rt", stdin);
  int n ;
  cin >> n;
  int digits[20] = {};
  int cnt = 0;

  while (true)
  {
    if(n < 2) {
      digits[cnt++] = n;
      break;
    }
    digits[cnt++] = n % 2;
    n /= 2;
  }
  
  for(int i = cnt -1; i >= 0; i--)
    cout << digits[i];
  return 0; 
}