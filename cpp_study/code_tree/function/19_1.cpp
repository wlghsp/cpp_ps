#include <iostream>
#include <string>
using namespace std;

/*
2021년 날짜의 유무 : 해설
*/

int days[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};


// 윤년이 아닐 때 m번째 달의 마지막 날을 반환하는 함수를 작성합니다.
bool lastDayNumber(int m) {
  if (m == 2)
    return 28;
  if(m == 4 || m == 6 || m == 9 || m == 12)
    return 30;
 return 31;
}


// 윤년이 아닐 때 m월 d일이 존재하는지 여부를 확인하는 함수를 작성합니다.
bool judgeDay(int m, int d) {
  if (m <= 12 && d <= lastDayNumber(m))
    return true;
  return false;
}


int main()
{ 
  freopen("input.txt", "rt", stdin);
  int m, d;
  cin >> m >> d;
  if(judgeDay(m, d)) {
    cout << "Yes";
  } else {
    cout << "No";
  }
  return 0;
}