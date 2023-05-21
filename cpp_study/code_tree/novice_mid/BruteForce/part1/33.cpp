#include <iostream>
#include <algorithm>
#include <climits>
#define MAX_N 100
using namespace std;

/*
팀 나누기 
*/

int main() {
  int n = 4;
  int arr[4] = {1, 5, 3, 6};
  int total = 0;
  for (int i = 0; i < n; i++)
  {
    total += arr[i];
  }
  
  int min_diff = INT_MAX;
  for (int i = 0; i < n; i++)
  {
    for (int j = i + 1; j < n; j++)
    {
      int diff = abs((arr[i] + arr[j]) - (total - (arr[i] + arr[j])));
      min_diff = min(min_diff, diff);
    }
  }
  cout << min_diff;
  
  return 0;
}