#include <iostream>
#include <algorithm>
using namespace std;
/*
Time to Time : 해설 풀이
*/

int main() {
  freopen("input.txt","rt", stdin);
  int a, b, c, d;
  cin >> a >> b >> c >> d;
  cout << (c * 60 + d) - (a * 60 + b);
  return 0;
}