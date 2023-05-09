#include <iostream>
#include <climits>
#define MAX_N 100
#define MAX_S 10000

using namespace std;

/*
특정 수와 근접한 합
내 풀이
*/

int N, S;
int arr[MAX_N];

void Input() {
  cin >> N >> S;

  for (int i = 0; i < N; i++)
  {
    cin >> arr[i];
  }
}

int Search() {
  int min_val = INT_MAX;
  for (int i = 0; i < N; i++)
  {
    for (int j = i + 1; j < N; j++)
    {
      int sum = 0;
      for (int k = 0; k < N; k++)
      {
        if (k == i || k == j) continue;
        sum += arr[k];
      }
      min_val = min(min_val, abs(S - sum));
    }
  }
  return min_val;
}


int main() {
  freopen("input.txt", "rt", stdin);
  Input();
  cout << Search();
  return 0;
}