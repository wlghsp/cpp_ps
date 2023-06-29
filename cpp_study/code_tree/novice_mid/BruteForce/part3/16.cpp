#include <iostream>
#include <climits>
#define MAX_N 10
#define MAX_M 100
using namespace std;
/*
가장 많이 나온 쌍
내 풀이
*/

int n, m;
int a[MAX_M], b[MAX_M];

void Input() {
  cin >> n >> m;
  for (int i = 0; i < m; i++)
  {
    cin >> a[i] >> b[i];
  }
}


int Search() {
  int max_cnt = 0;
  for (int i = 1; i <= n; i++)
  {
    
    for (int j = i + 1; j <= n; j++)
    {
      int cnt = 0;
      for (int k = 0; k < m; k++)
      {
        if((i == a[k] && j == b[k]) || 
           (j == a[k] && i == b[k])) {
          cnt++;
        }
      }
      max_cnt = max(max_cnt, cnt);
    }
    
  }
  return max_cnt;
}


int main() {
  freopen("input.txt", "rt", stdin);
  Input();
  cout << Search();
  return 0;
}