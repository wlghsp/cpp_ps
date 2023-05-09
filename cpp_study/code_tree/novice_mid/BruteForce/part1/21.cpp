#include <iostream>
#define MAX_N 20
using namespace std;

/*
구간 정하기
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
  int ans = 100;
  for (int i = 0; i <= N - K; i++)
  {
    int max_val = 0;
    for (int  j = i; j < i + K; j++)
    {
      max_val = max(max_val, arr[j]);
    }
    ans = min(ans, max_val);
  }
  return ans;
}


int main() {
  freopen("input.txt", "rt", stdin);
  Input();
  cout << Search();
  return 0;
}