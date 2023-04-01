#include <iostream>
#define MAX_N 10
#define MAX_K 100

using namespace std;
/*
사각형의 총 넓이 2
내 풀이
*/

int n;
int checked[2 * MAX_K + 1][2 * MAX_K + 1];
int OFFSET = 100;

int main()
{
  freopen("input.txt", "rt", stdin);
  cin >> n;
  for(int i = 0; i < n; i++) {
    int x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;
    x1 += OFFSET;
    y1 += OFFSET;
    x2 += OFFSET;
    y2 += OFFSET;
    for(int j = x1; j < x2; j++)
      for(int k = y1; k < y2; k++)
        checked[j][k] = 1;
  }
  int area = 0;
  for(int i = 0; i < 2 * MAX_K + 1; i++) 
    for(int j = 0; j < 2 * MAX_K + 1; j++)
      if (checked[i][j] == 1) area++;
  cout << area;
  return 0;
}