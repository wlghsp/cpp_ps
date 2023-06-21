#include <iostream>
#include <climits>
#include <string>
#define MAX_XY 1000000
using namespace std;
/*
중첩 완전탐색

5개의 숫자 [1, 5, 2, 6, 8]이 주어졌을 때
이 중 단 하나의 숫자만 두 배로 한 뒤,
5개 중 단 하나의 숫자만 제외했을 때, 
남은 4개의 인접한 숫자간의 차이의 합이 최대가 되도록 해보세요.

*/

int n = 5;
int arr[5] = {1, 5, 2, 6, 8};

int main() {
  int max_diff = 0;
  for (int i = 0; i < n; i++)
  {
    arr[i] *= 2;

    for (int j = 0; j < n; j++)
    {
      int remaining_arr[4] = {};
      int cnt = 0;
      for (int k = 0; k < n; k++)
      {
        if (k != j)
        {
          remaining_arr[cnt++] = arr[k];
        }
      }
      int sum_diff = 0;
      for (int k = 0; k < n - 2; k++)
      {
        sum_diff += abs(remaining_arr[k + 1] - remaining_arr[k]);
      }
      max_diff = max(max_diff, sum_diff);
    }
    arr[i] /= 2;
  }

  cout << max_diff;

  return 0;
}