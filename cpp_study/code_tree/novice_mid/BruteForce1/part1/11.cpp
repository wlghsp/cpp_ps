#include <iostream>
#include <climits>
#define MAX_N 100
using namespace std;

/*
마라톤 중간에 택시타기 2
해설 풀이
*/
class Point {
  public:
    int x, y;
    Point(int x, int y) {
      this->x = x;
      this->y = y;
    }
    Point() {}
};

int n;
Point points[MAX_N];
int ans;

void Input()
{
  cin >> n;
  for (int i = 0; i < n; i++)
  {
    int x, y;
    cin >> x >> y;
    points[i] = Point(x, y);
  }
}

int Search() {
  int minVal = INT_MAX;
  // i는 건너 뛸 체크포인트를 의미
  //  prev_idx를 0으로 설정하여 0번 지점과 1번 지점간의 거리 구함
  for (int i = 1; i < n - 1; i++)
  {
    int dist = 0;
    int prev_idx = 0;
    for (int j = 1; j < n; j++)
    {
      if (j == i) continue;
      dist += abs(points[prev_idx].x - points[j].x) 
      + abs(points[prev_idx].y - points[j].y);
      prev_idx = j;
    }
    minVal = min(minVal, dist);
  }

  return minVal;
}

int main()
{
  freopen("input.txt", "rt", stdin);

  Input();

  ans = Search();

  cout << ans;

  return 0;
}