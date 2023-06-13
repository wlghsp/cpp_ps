#include <iostream>
#define MAX_XY 10000
using namespace std;
/*
숫자들의 합 중 최대
내 풀이

두 개의 숫자 X, Y가 주어지면 X이상 Y이하에 있는 수 중 
각 자리 숫자의 합이 최대가 되도록 하는 프로그램을 작성해보세요.

첫 번째 줄에 X이상 Y이하에 각 자리 숫자의 합 중 최댓값을 출력합니다.
*/

int x, y;

void Input() {
  cin >> x >> y;
}

int GetSum(int num) {
  int sum = 0;
  while (num != 0)
  {
    sum += num % 10;
    num /= 10;
  }
  return sum;
}

int Search() {
  int ans = 0;
  for(int i = x; i <= y; i++) {
    ans = max(ans, GetSum(i));
  }
  return ans;
}


int main() {
  freopen("input.txt", "rt", stdin);
  Input();
  cout << Search();
  return 0;
}