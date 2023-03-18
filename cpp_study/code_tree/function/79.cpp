#include <iostream>
#include <algorithm>
using namespace std;
/*
흐른 날짜 계산 
*/

int main() {
  
  int month = 2, day = 5;
  int elapsed_days = 0;
  
  int num_of_days[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

  while (true)
  {
    if (month == 4 && day == 1) break;
    elapsed_days++;
    day++;
    if (day > num_of_days[month]) {
      month++;
      day = 1;
    }
  }
  cout << elapsed_days;
  return 0;
}