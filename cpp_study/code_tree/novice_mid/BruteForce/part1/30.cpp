#include <iostream>
#include <algorithm>
#include <climits>
#define MAX_N 100
using namespace std;

/*
밭의 높이를 고르게 하기
내 풀이

H높이
T번 연속
*/

int N, H, T;
int arr[MAX_N];


void Input() {
  cin >> N >> H >> T;
  for (int i = 0; i < N; i++) {
      cin >> arr[i];
  }
}

int Search() {
  int min_cost = INT_MAX;
  for (int i = 0; i <= N - T; i++)
  { 
      int cost = 0;
      for(int k = i; k < i + T; k++) {
        cost += abs(arr[k] - H);
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