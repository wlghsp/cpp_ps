#include <iostream>
#include <string>
#define MAX_NUM 100
using namespace std;
/*
두 직사각형
내 풀이
*/

int x1, y1, x2, y2;
int a1, b1, a2, b2;

void Input() {
    cin >> x1 >> y1 >> x2 >> y2 >> a1 >> b1 >> a2 >> b2;
}

bool isOverlapping() {
  return !(x2 < a1 || a2 < x1 || y2 < b1 || b2 < y1);
}


int main() {
  freopen("input.txt", "rt", stdin);
  Input();
  bool overlap = isOverlapping();


  cout << (overlap ? "overlapping" : "nonoverlapping");  
  return 0;
}