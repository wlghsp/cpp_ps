#include <iostream>
#include <algorithm>
using namespace std;
/*
DateTime to DateTime : 내 풀이
*/

int main() {
  // 일 시간 분을 전부 분으로 환산하여 그 차이를 계산한다. 
  freopen("input.txt", "rt", stdin);
  int a, b, c;
  cin >> a >> b >> c;
  int diff = (a * 24 * 60 + b * 60 + c) - (11 * 24 * 60 + 11 * 60 + 11);
  // 차이가 음수인 경우에는 -1을 출력한다. 
  cout << ((diff < 0) ? -1 : diff);
  return 0; 
}