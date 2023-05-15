#include <iostream>
#include <algorithm>
#include <climits>
#define MAX_N 100
using namespace std;

/*
바구니 안의 사탕 2
내 풀이
*/

int N, K;
int arr[MAX_N + 1];

void Input() {
  cin >> N >> K;
  for (int i = 0; i < N; i++) {
      int candy, point;
      cin >> candy >> point;
      arr[point] += candy;
  }
}

int Search() {
  int max_cnt = INT_MIN;
  for(int i = 0; i <= MAX_N; i++) {
    int sum = 0;
    int start = i - K < 0 ? 0 : i - K;
    int end = i + K > 100 ? MAX_N : i + K;
    for(int j = start; j <= end; j++) {
      sum += arr[j];
    }
    max_cnt = max(max_cnt, sum);
  }
  return max_cnt;
}


int main() {
  freopen("input.txt", "rt", stdin);
  Input();
  cout << Search();
  return 0;
}