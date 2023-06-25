#include <iostream>
#include <climits>
#include <vector>
#define MAX_N 20
#define MAX_XY 10
using namespace std;
/*
3개의 선 2
해설 풀이
*/

int n;
int x[MAX_N + 1], y[MAX_N + 1];

void Input() {
  cin >> n;
  for (int i = 0; i < n; i++)
  {
    cin >> x[i] >> y[i];
  }
}

int Search() {
  int ans = 0;
  // 모든 경우의 수 
  // x 3개
  // x 2개, y 1개
  // x 1개, y 2개
  // y 3개
  for (int i = 0; i <= MAX_XY; i++)
  {
    for (int j = 0; j <= MAX_XY; j++)
    {
      for (int k = 0; k <= MAX_XY; k++)
      {
       // success : 직선 3개로 모든 점을 지나게 할 수 있으면 true
       bool success = true;

       // x축에 평행한 직선 3개로
       // 모든 점을 지나게 할 수 있는 경우
       for (int l = 0; l < n; l++)
       {
        // 해당 점이 직선에 닿으면 넘어갑니다. 
        if (x[l] == i || x[l] == j || x[l] == k) continue;
        success = false;
       }
       if (success) ans = 1;

       // x축에 평행한 직선 2개와 y축에 평행한 직선 1개로
       // 모든 점을 지나게 할 수 있는 경우
       success = true;
       for (int l = 0; l < n; l++)
       {
        if (x[l] == i || x[l] == j || y[l] == k)
          continue;
        success = false;
       }
       if (success) ans = 1;
       // x축에 평행한 직선 1개와 y축에 평행한 직선 2개로
       // 모든 점을 지나게 할 수 있는 경우
       success = true;
       for (int l = 0; l < n; l++)
       {
        if (x[l] == i || y[l] == j || y[l] == k)
          continue;
        success = false;
       }
       if (success) ans = 1;       
       // y축에 평행한 직선 3개로
       // 모든 점을 지나게 할 수 있는 경우
       success = true;
       for (int l = 0; l < n; l++)
       {
        if (y[l] == i || y[l] == j || y[l] == k)
          continue;
        success = false;
       }
       if (success) ans = 1;       
       
      }
    }
  }
  return ans;
}


int main() {
  freopen("input.txt", "rt", stdin);
  Input();
  cout << Search();
  return 0;
}