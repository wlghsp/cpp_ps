#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
/*
요일 맞추기 : 내 풀이
*/

/*
  m1월 d1일 월요일
  m2월 d2일 은 무슨 요일?
*/

int GetNumberOfDays(int m, int d) {
  int days[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
  int total_days = 0;
  for(int i =1; i < m; i++) {
    total_days += days[i];
  }
  return total_days + d;
}

int main() {
  freopen("input.txt", "rt", stdin);
  string dayStrPlus[7] = {"Mon", "Tue","Wed", "Thu", "Fri", "Sat", "Sun"};
  string dayStrMinus[7] = {"Mon", "Sun","Sat", "Fri", "Thu", "Wed", "Tue"};
  int m1, d1, m2, d2;
  cin >> m1 >> d1 >> m2 >> d2;
  int days1 = GetNumberOfDays(m1, d1);
  int days2 = GetNumberOfDays(m2, d2);
  int diff = days2 - days1;
  if(diff >= 0) {
    cout << dayStrPlus[diff % 7];
  } else {
    cout << dayStrMinus[-diff % 7];
  }

  return 0; 
}