#include <iostream>
#define MAX_N 10
#define MAX_R 100
#define OFFSET 100

using namespace std;
/*
계속 중첩되는 사각형
내 풀이
*/

int checked[2 * MAX_R + 1][2 * MAX_R + 1];

int main()
{
  freopen("input.txt", "rt", stdin);
  int n, x1, y1, x2, y2;
  cin >> n;
  for (int i = 0; i < n; i++)
  {
    cin >> x1 >> y1 >> x2 >> y2;
    x1 += OFFSET;
    y1 += OFFSET;
    x2 += OFFSET;
    y2 += OFFSET;
    for (int j = x1; j < x2; j++)
      for (int k = y1; k < y2; k++)
        checked[j][k] == i % 2 ? 2 : 1;
  }

  int cnt = 0;
  for(int i = 0; i < 2 * MAX_R + 1; i++)
    for(int j = 0; j < 2 * MAX_R + 1; j++)
      if (checked[i][j]== 2) cnt++;
  cout << cnt;
  return 0;
}