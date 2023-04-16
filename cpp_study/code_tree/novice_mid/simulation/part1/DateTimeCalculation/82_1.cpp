#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
/*
요일 맞추기 : 해설 풀이
*/


int NumberOfDays(int m, int d) {
  int days[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
  int total_days = 0;
  for(int i =1; i < m; i++) {
    total_days += days[i];
  }
  return total_days + d;
}

int main() {
  freopen("input.txt", "rt", stdin);
  string dayStr[] = {"Mon", "Tue","Wed", "Thu", "Fri", "Sat", "Sun"};
  int m1, d1, m2, d2;
  cin >> m1 >> d1 >> m2 >> d2;
  int days1 = NumberOfDays(m1, d1);
  int days2 = NumberOfDays(m2, d2);
  int diff = days2 - days1;
  // 음수인 경우에는 양수로 바꿔줌 
  while (diff < 0)
    diff += 7;
  cout << dayStr[diff % 7];
  return 0; 
}