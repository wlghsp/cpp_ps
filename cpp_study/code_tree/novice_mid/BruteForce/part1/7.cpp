#include <iostream>
#include <cstdlib>
#include <algorithm>
using namespace std;

/*
격자 위에서의 가장 좋은 위치

*/

int n = 5;
int arr[5][5] = {{1, 0, 0, 0, 0},
                 {0, 1, 0, 0, 0},
                 {0, 1, 1, 0, 1},
                 {0, 0, 0, 1, 0},
                 {0, 0, 0, 0, 0}};

int main() {
  int max_cnt = 0;
  for(int i = 0; i < n; i++)
    for(int j = 0; j < n - 1; j++)
      max_cnt = max(max_cnt, arr[i][j] + arr[i][j+1]);
  
  cout << max_cnt;

  return 0;
}