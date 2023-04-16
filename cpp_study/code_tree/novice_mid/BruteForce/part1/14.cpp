#include <iostream>
#include <climits>
#define MAX_N 100
using namespace std;

/*
인접하지 않은 2개의 숫자
내 풀이
*/
int n;
int arr[MAX_N];
int ans;

void Input() {
  cin >> n;
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }
}

int findMaxSum() {
  int maxVal = INT_MIN;
  for (int i = 0; i < n - 1; i++)
  {
    for (int j = 0; j < n; j++)
    {
      if(j == i + 1 || j == i - 1 || j == i) continue;
      int sum = arr[i] + arr[j];
      maxVal = max(sum, maxVal);
    }
  }
  return maxVal;
}


int main() {
  freopen("input.txt", "rt", stdin);
  Input();
  ans = findMaxSum();
  cout << ans;
  return 0;
}