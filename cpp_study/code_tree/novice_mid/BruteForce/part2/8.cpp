#include <iostream>
#include <algorithm>
#include <climits>
#define MAX_N 100
using namespace std;

/*
물체 세 개를 정하여 완전탐색
*/

int n = 5;
int segments[5][2] = {{1,3}, {2, 4}, {5, 8}, {6, 9}, {7, 10}};

int GetMaxOverlappedCnt(int i1, int i2, int i3) {
  int counting[11] = {};  // initialize
  for (int i = 0; i < n; i++)
  {
    if(i == i1 || i == i2 || i == i3) continue;

    int x1 = segments[i][0], x2 = segments[i][1];
    for (int j = x1; j <= x2; j++)
    {
      counting[j]++;
    }
  }

  int max_cnt = 0;
  for(int j = 0; j < 11; j++)
    max_cnt = max(max_cnt, counting[j]);

  return max_cnt;
}

int main() {
    int ans = 100;
    for (int i = 0; i < n; i++)
    {
      for (int j = i + 1; j < n; j++)
      {
        for (int k = j + 1; k < n; k++)
        {
         int max_cnt = GetMaxOverlappedCnt(i, j, k);
         ans = min(ans, max_cnt); 
        }
      }
    }
  
    cout << ans;
    return 0;
}
