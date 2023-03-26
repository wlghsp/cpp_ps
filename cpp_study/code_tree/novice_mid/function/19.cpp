#include <iostream>
#include <string>
using namespace std;

/*
2021년 날짜의 유무 : 내 풀이
*/

int days[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

bool istheDayOkay(int m , int d) {
  if (d <= days[m-1] )
  {
    return true;
  }
  return false;
}

string isDateExist(int m, int d) {
  if (m > 12 || m < 1) return "No";
  if (!istheDayOkay(m, d))
  {
    return "No";
  }
  
  return "Yes";
}


int main()
{ 
  freopen("input.txt", "rt", stdin);
  int m, d;
  cin >> m >> d;
  string result = isDateExist(m, d);
  cout << result;
  return 0;
}