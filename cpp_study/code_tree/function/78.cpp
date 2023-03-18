#include <iostream>
#include <algorithm>
using namespace std;
/*
Time to Time : 내 풀이 
*/

int main() {
  freopen("input.txt","rt", stdin);
  int a, b, c, d;
  cin >> a >> b >> c >> d;
  int hour = a, mins = b;
  int elapsed_time = 0;

  while (true)
  {
    if (hour == c && mins == d) break;
    elapsed_time++;
    mins++;
    if (mins == 60) {
      hour++;
      mins = 0;
    }
  }
  cout << elapsed_time;
  return 0;
}