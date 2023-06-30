#include <iostream>
#include <algorithm>
using namespace std;
/*
최대와 최소간의 차이가 정해져 있는 경우
*/

int n = 5;
int arr[5] = {6, 3, 7, 3, 5};

int main() {
  int min_cost = 1000;
  for (int a = 1; a <= 9; a++)
  {
    int cost = 0;
    for (int i = 0; i < n; i++)
    {
      if (a <= arr[i] && arr[i] <= a + 2)
      {
        continue;
      } else if (arr[i] < a) {
        cost += a - arr[i];
      } else {
        cost += arr[i] - (a + 2);
      }
    }
    min_cost = min(min_cost, cost);
  }
  
  cout << min_cost;
  return 0;
}