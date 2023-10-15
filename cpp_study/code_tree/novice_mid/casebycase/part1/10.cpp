#include <iostream>
#include <string>
using namespace std;
/*
연속된 숫자 만들기 2
내 풀이
*/

int a, b, c;


void Input()
{
  cin >> a >> b >> c;
}


int main()
{
  freopen("input.txt", "rt", stdin);
  Input();
  int ans = 0;
  // 1. 처음 시작이 ABC인 경우에는 교환 없이 정렬이 가능하다
  // 2. 처음 시작에 ACB처럼 오직 1명만 원하는 자리에 위치하는 경우라면, 1번의 교환으로 정렬이 가능하다.
  // 3. 처음에 시작에 CAB 처럼 아무도 원하지 않는 자리에 위치하지 않는 경우라면, 2번의 교환으로 정렬이 가능하다. 
  if (c - b == 1 && b - a == 1)
  {
    ans = 0;
  } else if (c - b == 2 || b - a == 2 ) {
    ans = 1;
  } else {
    ans = 2;
  }
  cout << ans;
  return 0;
}