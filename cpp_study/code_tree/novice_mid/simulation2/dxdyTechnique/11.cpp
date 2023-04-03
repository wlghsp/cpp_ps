#include <iostream>
#define MAX_N 100
#define MAX_T 1000
using namespace std;
/*
되돌아오기
내 풀이
*/

int n;


class Point {
  public:
    int time;
    int x;
    int y;
    Point(int time, int x, int y) {
      this->time = time;
      this->x = x;
      this->y = y;
    }
    Point() {}
};


int main()
{
  freopen("input.txt", "rt", stdin);
  cin >> n;
  int time_a = 1;
  Point points[MAX_T];
  points[0] = Point(0, 0, 0);
  int seconds = 0;
  for (int i = 0; i < n; i++)
  {
    char d;
    int dis;
    cin >> d >> dis;
    seconds += dis;
    while (dis--)
    {
      if (d == 'N') {
        points[time_a].x = points[time_a - 1].x - 1;
        points[time_a].y = points[time_a - 1].y;
      } else if (d == 'S') {
        points[time_a].x = points[time_a - 1].x + 1; 
        points[time_a].y = points[time_a - 1].y;
      } else if (d == 'E') {
        points[time_a].y = points[time_a - 1].y + 1; 
        points[time_a].x = points[time_a - 1].x;
      } else if (d == 'W') {
        points[time_a].y = points[time_a - 1].y - 1; 
        points[time_a].x = points[time_a - 1].x;
      }
      points[time_a].time = time_a;
      time_a++;
    }
    
  }
  int ans = -1;
  for (int i = 1; i <= seconds; i++)
  {
    if(points[i].x == 0 && points[i].y == 0) {
      ans = points[i].time;
      break;
    }
  }
  cout << ans;
  
  return 0;
}

