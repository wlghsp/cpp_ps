#include <iostream>
#include <climits>
#define MAX_NUM 10000
using namespace std;

/*
G or H 3
내 풀이
*/

int N, K;
int arr[MAX_NUM + 1];

void Input() {
  cin >> N >> K;

  for (int i = 0; i < N; i++)
  {
    int idx;
    char c;
    cin >> idx >> c;
    arr[idx] = (c == 'G' ? 1 : 2);
  }
}

int Search() {
  int max_sum = INT_MIN;
  for (int i = 1; i <= MAX_NUM - K; i++)
  {
    int sum = 0;
    for (int  j = i; j <= i + K; j++)
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