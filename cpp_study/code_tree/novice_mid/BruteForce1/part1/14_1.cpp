#include <iostream>
#include <climits>
#define MAX_N 100
using namespace std;

/*
인접하지 않은 2개의 숫자
해설 풀이
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
  // 인접한 칸끼리의 합을 구하지 않도록 특정 칸으로부터
  // 2칸 이후의 칸부터의 합만 구한다. 
  for (int i = 0; i < n - 1; i++)
  {
    for (int j = i + 2; j < n; j++)
    {
      if(maxVal < arr[i] + arr[j])
         maxVal = arr[i] + arr[j];
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