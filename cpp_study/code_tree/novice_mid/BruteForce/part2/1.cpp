#include <iostream>
#include <algorithm>
#include <climits>
#define MAX_N 100
using namespace std;

/*
구간 정하기 
*/

int main() {
  int n = 6;
  int k = 4;
  int arr[n] = {1, 5, 2, 6, 8, 9};
  int min_val = 100;
  for (int i = 0; i < n - k + 1; i++)
  {
    int max_val = INT_MIN;
    for (int j = i; j < i + k; j++)
    {
        max_val = max(max_val, arr[j]);
    }
    min_val = min(max_val, min_val);
  }
  cout << min_val;

  return 0;
}