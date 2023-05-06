#include <iostream>
#include <cstdlib>
#include <climits>

using namespace std;

/*
두 자리를 정하여 완전탐색
*/
int n = 4;
int arr[4] = {1, 5, 2, 6};

int main() {
  int max_sum = 0;
  for (int i = 0; i < n; i++)
  {
    for (int j = i + 1; j < n; j++)
    {
      arr[i] *= 2;
      arr[j] *= 2;

      int sum_diff = 0;
      for(int k = 0; k < n-1; k++)
        sum_diff += abs(arr[k+1] - arr[k]);

      max_sum = max(max_sum, sum_diff);
      arr[i] /= 2;
      arr[j] /= 2;
    }
  }
   cout << max_sum;

  return 0;
}