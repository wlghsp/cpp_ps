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

int DigitSum(int num) {
  // 한 자리 숫자라면 그 숫자 그대로 반환
  if (num < 10) return num;
  // 두 자리 이상의 숫자라면,
  // 맨 끝자리를 제외한 숫자들의 합을 재귀적으로 호출한 뒤,
  // 그 결과가 마지막 자릿수를 더해 반환합니다.
  return DigitSum(num / 10) + num % 10;
}

int Search() {
  int ans = 0;
  for(int i = x; i <= y; i++) {
    ans = max(ans, DigitSum(i));
  }
  return ans;
}


int main() {
  freopen("input.txt", "rt", stdin);
  Input();
  cout << Search();
  return 0;
}