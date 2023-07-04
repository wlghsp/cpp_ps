#include <iostream>
#include <climits>
#include <algorithm>
#define MAX_N 1000
#define MAX_H 100

using namespace std;
/*
언덕 깎기
해설 풀이
*/

int n;
int k = 17;
int arr[MAX_N];

void Input() {
  cin >> n;
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }
}



int Search() {
  int min_cost = INT_MAX;
  // 크기가 K인 모든 구간을 잡아
  // 해당 구간 안에 들어오게 언덕을 깎고
  // 그 비용 중 최솟값을 계산합니다.
  for (int i = 0; i <= MAX_H; i++)
  {
    int cost = 0;
    for (int j = 0; j < n; j++)
    {
      // 구간 [i, i + k] 에서의 언덕을 깎는
      // 비용을 계산합니다. 
      // i + k 보다 높은 언덕은 높이가 i + k가 되게 깎으며
      // i 보다 낮은 언덕은 높이가 i가 되게 쌓으면 됩니다. 
      if (arr[j] < i)
      {
        cost += (arr[j] - i) * (arr[j] - i);
      }
      if (arr[j] > i + k)
      {
        cost += (arr[j] - i - k) * (arr[j] - i - k);
      }
    }
    min_cost = min(min_cost, cost);
  }
  
  return min_cost;
}

int main() {
  freopen("input.txt", "rt", stdin);
  Input();
  cout << Search();
  return 0;
}