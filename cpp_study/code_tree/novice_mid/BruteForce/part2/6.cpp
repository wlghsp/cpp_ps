#include <iostream>
#include <algorithm>
#include <climits>
#define MAX_N 100
using namespace std;

/*
물체 두 개를 정하여 완전탐색
*/

int n = 5;
int segments[5][2] = {{1,3}, {2, 4}, {5, 8}, {6, 9}, {7, 10}};

int main() {
    int ans = 100;
    for (int i = 0; i < n; i++)
    {
      for (int j = i + 1; j < n; j++)
      {
        int counting[11] = {};  // initialize
        for (int k = 0; k < n; k++)
        {
          if(k == i || k == j) continue; // 2개의 선분 제외 
          
          int x1 = segments[k][0], x2 = segments[k][1];
          for(int l = x1; l <= x2; l++){
              counting[l]++;
          }
        }
          int max_cnt = 0;
          for(int l = 0; l < 11; l++)
              max_cnt = max(max_cnt, counting[l]);
          ans = min(ans, max_cnt);
      }
    }
  
    cout << ans;
    return 0;
}
