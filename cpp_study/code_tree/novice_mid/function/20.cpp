#include <iostream>
#include <string>
using namespace std;

/*
그 계절, 그 날 : 내 풀이

마지막날 구하는 함수에서 12로 잘못 타이핑한 것을 그대로 사용하다
오답 발생

*/

bool isLeapYear(int y)
{
  return y % 4 == 0 && y % 100 != 0 || y % 400 == 0;
}

int lastDayNumber(int m, bool leapYear)
{
  if (m == 2)
    return leapYear ? 29 : 28;
  if (m == 4 || m == 6 || m == 9 || m == 11)
    return 30;
  return 31;
}

bool judgeDay(int m, int d, bool leapYear)
{
  if (d <= lastDayNumber(m, leapYear))
    return true;
  return false;
}

string judgeSeason(int m)
{
  if (3 <= m && m <= 5)
  {
    return "Spring";
  }
  else if (6 <= m && m <= 8)
  {
    return "Summer";
  }
  else if (9 <= m && m <= 11)
  {
    return "Fall";
  }
  else
  {
    return "Winter";
  }
}

int main()
{
  freopen("input.txt", "rt", stdin);
  int y, m, d;
  cin >> y >> m >> d;
  bool leapYear = isLeapYear(y);
  bool exist = judgeDay(m, d, leapYear);
  if (exist)
  {
    string result = judgeSeason(m);
    cout << result;
  }
  else
  {
    cout << -1;
  }

  return 0;
}