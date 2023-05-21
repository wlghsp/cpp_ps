#include <iostream>
#include <algorithm>
#include <climits>
#define N 5
using namespace std;

/*
개발팀의 능력
해설 풀이
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

int Diff(int i, int j, int k) {
  int ret = INT_MAX;
  int sum1 = arr[i];
  int sum2 = arr[j] + arr[k];
  int sum3 = total - sum1 - sum2;

  if (sum1 == sum2 || sum2 == sum3 || sum3 == sum1) {
    return ret;
  }

  return max(max(sum1, sum2), sum3) - min(min(sum1, sum2), sum3);
}

int Search() {
  int min_diff = INT_MAX;
  for (int i = 0; i < N; i++)
  {
    for (int j = 0; j < N; j++)
    {
      for (int k = 0; k < N; k++)
      {
        if(i != j && j != k && k != i) {
          min_diff = min(min_diff, Diff(i, j, k));
        }
      }
    }
  }
  return min_diff != INT_MAX ? min_diff : -1;
}


int main() {
  freopen("input.txt", "rt", stdin);
  Input();
  cout << Search();
  return 0;
}