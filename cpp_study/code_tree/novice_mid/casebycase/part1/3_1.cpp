#include <iostream>
#include <algorithm>
#define MAX_N 100
using namespace std;
/*
구역 청소
해설 풀이
*/

int a, b, c, d;

bool Intersecting(int x1, int x2, int x3, int x4) {
  if(x2 < x3 || x4 < x1) return false;
  else return true;
}


void Input()
{
  cin >> a >> b >> c >> d;
}


int main()
{
  freopen("input.txt", "rt", stdin);
  Input();
  int ans = 0;
  if (Intersecting(a, b, c, d))
  {
    ans = max(b, d) - min(a, c);
  }
  else {
    ans = (b - a) + (d - c);
  }
  
  cout << ans;
  return 0;
}