#include <iostream>
#include <algorithm>
#include <climits>
#define MAX_N 100
using namespace std;

/*
좌표평면 위의 특정 구역 2
내 풀이
*/

int n;

class Point {
  public:
    int x, y;
    
    Point(int x, int y) {
      this->x = x;
      this->y = y;
    }
    Point() {}
};

Point points[MAX_N];

void Input() {
  cin >> n;
  for (int i = 0; i < n; i++)
  {
    int x, y;
    cin >> x >> y;
    points[i] = Point(x, y);
  }
}

int Search() {
  int min_size = INT_MAX;

  for(int i = 0; i < n; i++) {
    int max_x = 0;
    int min_x = INT_MAX;
    int max_y = 0;
    int min_y = INT_MAX;
    for(int j = 0;  j < n; j++) {
      // i번째 점은 제외 합니다. 
      if(i == j)  continue;
      // x축 최소 최대, y축 최소 최대
      int x = points[j].x;
      int y = points[j].y;
      max_x = max(max_x, x);
      min_x = min(min_x, x);
      max_y = max(max_y, y);
      min_y = min(min_y, y);
    }
    int size = (max_x - min_x) * (max_y - min_y);
    min_size = min(min_size, size);
  }
   
  return min_size; 
}


int main() {
  freopen("input.txt", "rt", stdin);
  Input();
  cout << Search();
  return 0;
}