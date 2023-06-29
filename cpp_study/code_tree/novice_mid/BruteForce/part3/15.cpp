#include <iostream>
#include <algorithm>
using namespace std;
/*
관심을 둘 대상에 대한 선택
*/

int n = 5;
int segments[5][2] = {{1, 3}, {2, 4}, {5, 8}, {6, 9}, {7, 10}};

int main() {
  int max_cnt = 0;
  for (int x = 1; x <= 10; x++)
  {
    int overlapped_cnt = 0;
    for (int i = 0; i < n; i++)
    {
      int x1 = segments[i][0], x2 = segments[i][1];
      if(x1 <= x && x <= x2)
        overlapped_cnt++;
    }
    max_cnt = max(max_cnt, overlapped_cnt);
  }
  cout << max_cnt;
  return 0;
}