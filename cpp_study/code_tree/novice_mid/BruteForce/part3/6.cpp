#include <iostream>
#include <climits>
#include <vector>
#define MAX_N 20
#define MAX_XY 10
using namespace std;
/*
3개의 선 2
내 풀이
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

bool checkLine(int i, int j, int k, char a, char b, char c) {

    bool success = true;
    for (int l = 0; l < n; l++)
    {
      int c1 = x[l];
      int c2 = x[l];
      int c3 = x[l];
      if(a == 'y') c1 = y[l];
      if(b == 'y') c2 = y[l];
      if(c == 'y') c3 = y[l];

      if (c1 == i || c2 == j || c3 == k) 
      {
        continue;
      }
      success = false;
    }
    
    return success;
}


int Search() {
  int ans = 0;
  // 모든 경우의 수 4가지 경우에 대해 실시
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
       if(checkLine(i, j, k, 'x', 'x', 'x')) ans = 1;
       if(checkLine(i, j, k, 'x', 'x', 'y')) ans = 1;
       if(checkLine(i, j, k, 'x', 'y', 'y')) ans = 1;
       if(checkLine(i, j, k, 'y', 'y', 'y')) ans = 1;
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