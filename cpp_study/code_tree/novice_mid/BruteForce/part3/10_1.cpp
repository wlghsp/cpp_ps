#include <iostream>
#include <climits>
#include <string>
#define MAX_N 100
#define MAX_M 10000
using namespace std;
/*
원소 값들의 최대 합
해설 풀이
*/

int n, m;
int arr[MAX_N + 1];
void Input() {
  cin >> n >> m;
  for (int i = 1; i <= n; i++)
  {
    cin >> arr[i];
  }
}

int Search() {
  int max_sum = 0;
  for (int i = 1; i <= n; i++)
  {
    // 시작점은 i입니다. 
    int sum_element = 0;
    int cur = i;

    // m번 움직임을 반복합니다. 
    for (int j = 0; j < m; j++)
    {
      sum_element += arr[cur];
      cur = arr[cur];
    }
    max_sum = max(max_sum, sum_element);
  }
  return max_sum;
}


int main() {
  freopen("input.txt", "rt", stdin);
  Input();
  cout << Search();
  return 0;
}