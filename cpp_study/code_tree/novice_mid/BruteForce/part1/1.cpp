#include <iostream>

using namespace std;

/*
한 자리를 정하여 완전탐색

5개의 숫자 [1, 5, 2, 6, 8]이 주어졌을 때
이 중 단 하나의 숫자만 두 배로 해서, 인접한 숫자간의 차이의 합이 최대가 되도록 해보세요.


*/
int n = 5;
int arr[5] = {1, 5, 2, 6, 8};

int main() {
  int max_sum = 0;
  for (int i = 0; i < n; i++)
  {
    arr[i] *= 2;

    int sum_diff = 0;
    for (int j = 0; j < n - 1; j++)
    {
      sum_diff += abs(arr[j + 1] - arr[j]);
    }
    max_sum = max(max_sum, sum_diff);
    arr[i] /= 2;
  }

  cout << max_sum;
  return 0;
}