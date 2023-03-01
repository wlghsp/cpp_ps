#include <iostream>
#include <string>
using namespace std;

string isLeapYear(int y) { 
    // 4의 배수가 아니라면 윤년이 확실히 아닙니다.
    if (y % 4 != 0)
    {
      return "false";
    }
    // 여기까지 온 이상 4의 배수임을 가정해도 됩니다.
    // 그 중 100의 배수가 아니라면 확실히 윤년입니다.
    if (y % 100 != 0)
    {
      return "true";
    }
    // 여기까지 온 이상 100의 배수임을 가정해도 됩니다.
    // 그 중 400의 배수라면 확실히 윤년입니다. 
    if(y % 400 == 0) {
      return "true";
    }

    // 여기까지 온 이상 100의 배수이지만, 400의 배수가 아닙니다. 
    // 따라서 확실히 윤년이 아닙니다. 
    return "false";
}

int main()
{
  freopen("input.txt", "rt", stdin);
  int y;
  cin >> y;
  cout << isLeapYear(y);
  return 0;
}