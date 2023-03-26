#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
/*
그 요일은 : 내 풀이
*/

/*
  m1월 d1일 월요일
  m2월 d2일 까지 A요일의 등장 횟수
*/

string dayStr[] = {"Mon", "Tue","Wed", "Thu", "Fri", "Sat", "Sun"};

int GetNumberOfDays(int m, int d) {
  int days[13] = {0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
  int total_days = 0;
  for(int i =1; i < m; i++) {
    total_days += days[i];
  }
  return total_days + d;
}

int GetDay(string a) {
  int result = 0;
  for(int i = 0; i < 7; i++) {
    if(dayStr[i] == a) {
      result = i;
    }
  }
  return result;
}

int main() {
  freopen("input.txt", "rt", stdin);
  
  int m1, d1, m2, d2;
  string A;
  cin >> m1 >> d1 >> m2 >> d2 >> A;
  int days1 = GetNumberOfDays(m1, d1);
  int days2 = GetNumberOfDays(m2, d2);
  int diff = days2 - days1;
  int day = GetDay(A);
  int cnt = (diff % 7 != 0 && diff % 7 >= day)? diff / 7 + 1: diff / 7;
  cout << cnt;
  return 0; 
}