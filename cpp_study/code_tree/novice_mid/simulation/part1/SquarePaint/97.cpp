#include <iostream>
#define MAX_K 1000

using namespace std;
/*
겹치지 않는 사각형의 넓이
내 풀이
*/

int checked[2 * MAX_K + 1][2 * MAX_K + 1];
int OFFSET = 1000;

int main()
{
  freopen("input.txt", "rt", stdin);
  int x1, y1, x2, y2;
  for(int i = 0; i < 3; i++) {
    cin >> x1 >> y1 >> x2 >> y2;
    x1 += OFFSET;
    y1 += OFFSET;
    x2 += OFFSET;
    y2 += OFFSET;
    for(int j = x1; j < x2; j++)
      for(int k = y1; k < y2; k++)
        if(i != 2) checked[j][k] = 1;
        else checked[j][k] = 0;
  }

  int area = 0;
  for(int i = 0; i < 2 * MAX_K + 1; i++) 
    for(int j = 0; j < 2 * MAX_K + 1; j++)
      if (checked[i][j] == 1) area++;
  cout << area;
  return 0;
}