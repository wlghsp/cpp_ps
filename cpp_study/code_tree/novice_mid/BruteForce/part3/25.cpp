#include <iostream>
#include <climits>
#include <algorithm>
#define MAX_N 100
#define MAX_K 10000

using namespace std;
/*
최대 최소간의 차
내 풀이
*/

int n, k;
int arr[MAX_N];

void Input() {
  cin >> n >> k;
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }
}


int Search() {
  int min_cost = INT_MAX;
  for (int a = 1; a <= MAX_K; a++)
  {
    int cost = 0;
    for (int i = 0; i < n; i++)
    {
      if (a <= arr[i] && arr[i] <= a + k) continue;
      else if (arr[i] < a) cost += a - arr[i];
      else cost += arr[i] - (a + k);
    }
    min_cost = min(min_cost, cost);
  }
  
  return min_cost;
}

int main() {
  freopen("input.txt", "rt", stdin);
  Input();
  cout << Search();
  return 0;
}