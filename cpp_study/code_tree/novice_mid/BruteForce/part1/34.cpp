#include <iostream>
#include <algorithm>
#include <climits>
#define N 6
using namespace std;

/*
개발자의 능력 3
내 풀이
*/

int arr[N];
int total = 0; 

void Input() {
  for (int i = 0; i < N; i++)
  {
    cin >> arr[i];
    total += arr[i];
  }
}

int Search() {
  int min_diff = INT_MAX;
  for (int i = 0; i < N; i++)
  {
    for (int j = i + 1; j < N; j++)
    {
      for (int k = j + 1; k < N; k++)
      {
        int sum1 = arr[i] + arr[j] + arr[k];
        int diff = abs((total - sum1) - sum1);
        min_diff = min(min_diff, diff);
      }
    }
  }
  return min_diff;
}


int main() {
  freopen("input.txt", "rt", stdin);
  Input();
  cout << Search();
  return 0;
}