#include <iostream>
#include <climits>
#define MAX_N 100
using namespace std;

/*
구간 중 최대 합
내 풀이
*/

int N, K;
int arr[MAX_N];

void Input() {
  cin >> N >> K;

  for (int i = 0; i < N; i++)
  {
    cin >> arr[i];
  }
}

int Search() {
  int max_sum = INT_MIN;
  for (int i = 0; i <= N - K; i++)
  {
    int sum = 0;
    for (int  j = i; j < i + K; j++)
    {
      sum += arr[j];
    }
    max_sum = max(sum, max_sum);
  }
  return max_sum;
}


int main() {
  freopen("input.txt", "rt", stdin);
  Input();
  cout << Search();
  return 0;
}