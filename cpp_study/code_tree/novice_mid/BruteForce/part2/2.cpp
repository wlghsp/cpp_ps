#include <iostream>
#include <algorithm>
#include <climits>
#define MAX_N 100
using namespace std;

/*
구간 중 최대 합
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
  int max_sum = INT_MIN;

  for(int i = 0; i < n - k + 1; i++) {
    int sum = 0;
    for(int j = i;  j < i + k; j++) {
      sum += arr[j];
    }
    max_sum = max(max_sum, sum);
  } 
  return max_sum; 
}


int main() {
  freopen("input.txt", "rt", stdin);
  Input();
  cout << Search();
  return 0;
}