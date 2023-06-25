#include <iostream>
#include <climits>
#include <vector>
#define MAX_N 100
#define MAX_XY 100
using namespace std;
/*
좌표평면 위의 균형 2
내 풀이
*/

int n;
int a[MAX_N + 1], b[MAX_N + 1];

void Input() {
  cin >> n;
  for (int i = 0; i < n; i++)
  {
    cin >> a[i] >> b[i];
  }
}

int Search() {
  int min_cnt = INT_MAX;
  for (int i = 0; i <= MAX_XY; i += 2)
  {
    for (int j = 0; j <= MAX_XY; j += 2)
    {
      int a1 = 0, a2 = 0, a3 = 0, a4 = 0;
      int x = i;
      int y = j;
      for (int k = 0; k < n; k++)
      {
        if(a[k] > x && b[k] > y) a1++;
        if(a[k] < x && b[k] > y) a2++;
        if(a[k] < x && b[k] < y) a3++;
        if(a[k] > x && b[k] < y) a4++;
      }
      int max_val1 = max(a1, a2);
      int max_val2 = max(a3, a4);
      int max_val = max(max_val1, max_val2);
      min_cnt = min(min_cnt, max_val);
    }
  }
  return min_cnt;
}


int main() {
  freopen("input.txt", "rt", stdin);
  Input();
  cout << Search();
  return 0;
}