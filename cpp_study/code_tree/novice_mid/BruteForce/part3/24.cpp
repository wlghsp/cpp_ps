#include <iostream>
#include <climits>
#include <algorithm>
#define MAX_N 1000
#define MAX_H 100

using namespace std;
/*
언덕 깎기
내 풀이
*/

int n;
int arr[MAX_N];

void Input() {
  cin >> n;
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }
}

int GetCost(int l, int r) {
  int cost = 0;
  for (int i = 0; i < n; i++)
  {
    if(arr[i] < l || r < arr[i]) {
      int x = min(abs(arr[i] - l), abs(r - arr[i]));
      cost += (x * x);
    }
  }
  return cost;
}


int Search() {
  int min_cost = INT_MAX;
  for (int i = 0; i <= MAX_H; i++)
  {
    min_cost = min(min_cost, GetCost(i, i + 17));
  }
  
  return min_cost;
}

int main() {
  freopen("input.txt", "rt", stdin);
  Input();
  cout << Search();
  return 0;
}