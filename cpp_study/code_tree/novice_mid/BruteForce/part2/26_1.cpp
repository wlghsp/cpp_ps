#include <iostream>
#include <climits>
#include <string>
#define MAX_XY 1000000
using namespace std;
/*
팰린드롬 수 찾기
해설 풀이
*/

int x, y;

void Input() {
  cin >> x >> y;
}

bool IsPalindrome(int num) {
  string str = to_string(num);
  string str_reverse = "";
  for (int j = (int)str.length() - 1; j >= 0; j--)
  {
    str_reverse += str[j];
  }
  return str != str_reverse ? false : true;
}

int Search() {
  int cnt = 0;
  for(int i = x; i <= y; i++) {
    if(IsPalindrome(i)) cnt++;
  }
  return cnt;
}


int main() {
  freopen("input.txt", "rt", stdin);
  Input();
  cout << Search();
  return 0;
}