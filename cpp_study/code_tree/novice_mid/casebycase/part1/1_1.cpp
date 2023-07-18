#include <iostream>
#include <climits>
#include <string>
#define MAX_X 100
using namespace std;
/*
두 선분
내 풀이
*/

int x1, x2, x3, x4;
int straight_line[MAX_X + 1];
void Input() {
    cin >> x1 >> x2 >> x3 >> x4;
}

bool Intersecting(int x1, int x2, int x3, int x4) {
  // 겹치지 않는 경우에 대한 처리를 먼저 진행합니다. 
  if (x2 < x3 || x4 < x1) return false;
  // 나머지는 전부 겹치는 경우라고 볼 수 있습니다. 
  else return true;
}


int main() {
  freopen("input.txt", "rt", stdin);
  Input();
  // 겹치는지를 확인합니다.
  if(Intersecting(x1, x2, x3, x4)) 
    cout << "intersecting";
  else 
    cout << "nonintersecting";  
  return 0;
}