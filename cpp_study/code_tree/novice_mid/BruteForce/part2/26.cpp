#include <iostream>
#include <climits>
#include <string>
#define MAX_XY 1000000
using namespace std;
/*
팰린드롬 수 찾기
내 풀이
*/

int x, y;

void Input() {
  cin >> x >> y;
}

bool IsPalindrome(int num) {
  string s = "";
  int originalNum = num;
  while (num != 0)
  {
    s += (char) (num % 10 + 48);
    num /= 10;
  }
  return originalNum == stoi(s);
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