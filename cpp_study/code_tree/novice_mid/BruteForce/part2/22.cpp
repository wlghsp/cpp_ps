#include <iostream>
#define MAX_XY 1000000
using namespace std;
/*
흥미로운 숫자 2
내 풀이
*/

int x, y;

void Input() {
  cin >> x >> y;
}

bool InterestingNumber(int num) {
  int counting[10] = {};

  while (num != 0)
  {
    counting[num % 10]++;
    num /= 10;
  }
  int cntOne = 0;
  int cnt = 0;
  for (int i = 0; i < 10; i++)
  {
    if(counting[i] == 1) cntOne++;
    else if (counting[i] >= 2) cnt++;
  }
  return (cntOne == 1 && (cnt + cntOne) == 2) ? true : false;
}


int Search() {
  int cnt = 0;
  for (int i = x; i <= y; i++)
  {
    if(InterestingNumber(i)) cnt++;    
  }
  return cnt;
}


int main() {
  freopen("input.txt", "rt", stdin);
  Input();
  cout << Search();
  return 0;
}