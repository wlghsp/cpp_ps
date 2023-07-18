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


int main() {
  freopen("input.txt", "rt", stdin);
  Input();

  for (int i = x1; i <= x2; i++)
  {
    straight_line[i]++;
  }
  for (int i = x3; i <= x4; i++)
  {
    straight_line[i]++;
  }

  for (int i = 1; i <= MAX_X; i++)
  {
    if(straight_line[i] >= 2) {
        cout << "intersecting";
        return 0;
    }
  }
  
  cout << "nonintersecting";  
  return 0;
}