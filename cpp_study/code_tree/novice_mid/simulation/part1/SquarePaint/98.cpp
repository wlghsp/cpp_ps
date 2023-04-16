#include <iostream>
#define MAX_K 100

using namespace std;
/*
색종이의 총 넓이
내 풀이
*/

int checked[2 * MAX_K + 1][2 * MAX_K + 1];
int OFFSET = 100;

int main()
{
  freopen("input.txt", "rt", stdin);
  int n, x, y;
  cin >> n;
  for (int i = 0; i < n; i++)
  {
    cin >> x >> y;
    x += OFFSET;
    y += OFFSET;
    for (int j = x; j < x + 8; j++)
      for (int k = y; k < y + 8; k++)
        checked[j][k] = 1;
  }

  int area = 0;
  for (int i = 0; i < 2 * MAX_K + 1; i++)
    for (int j = 0; j < 2 * MAX_K + 1; j++)
      if (checked[i][j] == 1)
        area++;
  cout << area;
  return 0;
}