#include <iostream>
#include <cstdlib>
#include <algorithm>
using namespace std;

/*
세 자리를 정하여 완전탐색
*/

int n = 4;
int arr[4] = {1, 5, 2, 6};


int main() {
  int max_sum = 0;
  for (int i = 0; i < n; i++)
  {
    for (int j = i + 1; j < n; j++)
    {
      for (int k = j + 1; k < n; k++)
      {
        arr[i] *= 2;
        arr[j] *= 2;
        arr[k] *= 2;

        int sum_diff = 0;
        for (int l = 0; l < n - 1; l++)
        {
          sum_diff += abs(arr[l + 1] - arr[l]);
        }
        max_sum = max(max_sum, sum_diff);
        
        arr[i] /= 2;
        arr[j] /= 2;
        arr[k] /= 2;
      }
      
    }
    
  }
  
  cout << max_sum;

  return 0;
}