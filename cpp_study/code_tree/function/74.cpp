#include <iostream>
#include <tuple>
#include <algorithm>
using namespace std;
/*
원점으로부터의 거리
: 내 풀이
*/

class Point {
  public:
    int x, y, number;


    Point(int x, int y, int number) {
      this->x = x;
      this->y = y;
      this->number = number;
    }
    Point() {}
};

int GetDistFromOrigin(int x, int y) {
  return abs(x) + abs(y);
}

bool cmp(const Point &a, const Point & b) {
  int dist_a = GetDistFromOrigin(a.x, a.y);
  int dist_b = GetDistFromOrigin(b.x, b.y);
  if(dist_a != dist_b)
    return dist_a < dist_b;
  return a.number < b.number; 
}


int main() {
  freopen("input.txt", "rt", stdin);
  int n;
  cin >> n;
  Point points[n];
  for(int i = 0; i < n; i++) {
    int x, y;
    cin >> x >> y;
    points[i] = Point(x, y, i+1);
  }
  sort(points, points + n, cmp);
  for(auto p: points) {
    cout << p.number << '\n';
  }
  return 0;
}