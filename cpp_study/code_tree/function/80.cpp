#include <iostream>
#include <algorithm>
using namespace std;
/*
Date to Date : 내 풀이
*/

int main() {
  freopen("input.txt", "rt", stdin);
  int m1, d1, m2, d2;
  cin >> m1 >> d1 >> m2 >> d2;
  int month = m1, day = d1;
  int elapsed_days = 0;
  
  int num_of_days[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

  while (true)
  {
    if (month == m2 && day == d2) break;
    elapsed_days++;
    day++;
    if (day > num_of_days[month]) {
      month++;
      day = 1;
    }
  }
  cout << elapsed_days + 1;
  return 0;
}