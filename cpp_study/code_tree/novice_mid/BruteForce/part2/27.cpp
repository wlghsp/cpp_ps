#include <iostream>
#include <climits>
#include <string>
#define MAX_XY 1000000
using namespace std;
/*
잘 모르는 상황에서의 완전탐색
*/

int max_cnt = 0;

int main() {
  for (int i = 1; i < 10; i++)
  {
    int num = i, cnt = 0;
    while (num != 1)
    {
      if(num % 2 == 0) num /= 2;
      else num = num * 3 + 1;
      cnt++;
    }
    max_cnt = max(max_cnt, cnt);
  }
  
  cout << max_cnt;

  return 0;
}