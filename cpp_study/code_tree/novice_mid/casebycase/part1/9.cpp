#include <iostream>
#include <string>
using namespace std;
/*
순간이동
내 풀이
*/

int A,B, x, y;


void Input()
{
  cin >> A >> B >> x >> y;
}


int main()
{
  freopen("input.txt", "rt", stdin);
  Input();
  // 1. A에서  B로 바로 이동하는 겨우
  // 2. A에서 X로 간 뒤 환승하여, Y로 이동한 뒤 다시 환승하여 B로 가는 경우
  // 3. A에서 Y로 간 뒤 환승하여, X로 이동한 뒤 다시 환승하여 B로 가는 경우
  int d1 = abs(B - A);
  int d2 = abs(A - x) + abs(y - B);
  int d3 = abs(A - y) + abs(x - B);
  int ans = 0;

  ans = min(d1, d2);
  ans = min(ans, d3);
  cout << ans;
  return 0;
}