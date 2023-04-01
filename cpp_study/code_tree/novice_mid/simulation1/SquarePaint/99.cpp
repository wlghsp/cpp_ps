#include <iostream>
#include <climits>
#define MAX_R 1000

using namespace std;
/*
잔해물을 덮기 위한 사각형의 최소 넓이
내 풀이
*/

int checked[2 * MAX_R + 1][2 * MAX_R + 1];
int OFFSET = 1000;

int main()
{
  freopen("input.txt", "rt", stdin);
  int x1, y1, x2, y2;
  for (int i = 1; i <= 2; i++)
  {
    cin >> x1 >> y1 >> x2 >> y2;
    x1 += OFFSET;
    y1 += OFFSET;
    x2 += OFFSET;
    y2 += OFFSET;
    for (int j = x1; j < x2; j++)
      for (int k = y1; k < y2; k++)
        if (i == 1)
          checked[j][k]++;
        else
          checked[j][k]--;
  }
  int minX = 2 * MAX_R;
  int minY = 2 * MAX_R;
  int maxX = 0;
  int maxY = 0;
  bool found = false;
  for (int i = 0; i < 2 * MAX_R + 1; i++)
    for (int j = 0; j < 2 * MAX_R + 1; j++)
      if (checked[i][j] == 1)
      {
        found = true;
        if (i > maxX)
          maxX = i;
        if (i < minX)
          minX = i;
        if (j > maxY)
          maxY = j;
        if (j < minY)
          minY = j;
      }

  if (found)
  {
    cout << ((maxX + 1) - minX) * ((maxY + 1) - minY);  
  } else {
    cout << 0;
  }

  
  return 0;
}