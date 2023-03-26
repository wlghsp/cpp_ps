#include <iostream>

#define N 3
#define MAX_R 2000
#define OFFSET 1000

using namespace std;

int a1[N], b1[N];
int a2[N], b2[N];

int checked[MAX_R + 1][MAX_R + 1];
/*
겹치지 않는 사각형의 넓이
해설 풀이
*/
int main()
{
  freopen("input.txt", "rt", stdin);
  for(int i = 0; i < 3; i++) {
    cin >> a1[i] >> b1[i] >> a2[i] >> b2[i];
    // OFFSET을 더해 줍니다.
    a1[i] += OFFSET;
    b1[i] += OFFSET;
    a2[i] += OFFSET;
    b2[i] += OFFSET;
  }

  // 직사각형에 주어진 순으로 1, 2, 3 번호를 붙여줍니다. 
  // 격자 단위로 진행하는 문제이므로
  // a2, y2에 등호가 들어가지 않음에 유의합니다. 
  for(int i = 0; i < N; i++)
    for(int x = a1[i]; x < a2[i]; x++)
      for(int y = b1[i]; y < b2[i]; y++)
        checked[x][y] = i + 1;
  // 1, 2, 3 순으로 붙였는데도 
  // 아직 숫자 1, 2로 남아있는 영역의 넓이를 구합니다. 
  int area = 0;
  for(int i = 0; i < MAX_R + 1; i++) 
    for(int j = 0; j < MAX_R + 1; j++)
      if (checked[i][j] == 1 || checked[i][j] == 2) area++;
  cout << area;
  return 0;
}