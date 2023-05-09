#include <iostream>
#include <climits>
#define MAX_N 100
#define MAX_S 10000

using namespace std;

/*
특정 수와 근접한 합
해설 풀이
*/

int N, S;
int arr[MAX_N];
int array_sum;

void Input() {
  cin >> N >> S;

  for (int i = 0; i < N; i++)
  {
    cin >> arr[i];
  }
}

int Search() {
  int min_val = INT_MAX;

  // 배열 값의 총합을 구해 놓음
  for (int i = 0; i < N; i++) array_sum += arr[i];
  

  for (int i = 0; i < N; i++)
  {
    for (int j = i + 1; j < N; j++)
    {
     int new_sum = array_sum - arr[i] - arr[j];
     min_val = min(min_val, abs(new_sum - S));
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