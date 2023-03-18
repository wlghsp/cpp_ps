#include <iostream>
#include <algorithm>
using namespace std;
/*
흐른 시간 계산
*/

int main() {
  int hour = 2, mins = 5;
  int elapsed_time = 0;

  while (true)
  {
    if (hour == 4 && mins == 1) break;
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