#include <iostream>
#include <climits>
#define MAX_N 1000
#define MAX_K 10000
using namespace std;
/*
숫자들의 최대 차
내 풀이
*/

int n, k;
int max_val= INT_MIN;
int arr[MAX_N];

void Input() {
  cin >> n >> k;
  for (int a = 0; a < n; a++)
  {
    cin >> arr[a];
    max_val = max(max_val, arr[a]);
  }
}

// 구간 [l, r]
// 사이에 들어있는 숫자 갯수를 반환합니다. 
int CountNum(int l, int r) {
  int cnt = 0;
  for (int i = 0; i < n; i++)
  {
    if (l <= arr[i] && arr[i] <= r)
    {
      cnt++;
    }
  }
  return cnt;  
}


int Search() {
  int max_cnt = 0;
  // 크기가 K인 모든 구간을 잡아
  // 해당 구간 안에 들어오는 숫자의 개수를 세서
  // 그 중 최댓값을 계산합니다.
  for (int a = 1; a <= MAX_K; a++)
  {
    // 구간 [i, i + k] 사이에 들어 있는 숫자를 세어
    // 최댓값을 계산합니다.
    max_cnt = max(max_cnt, CountNum(a, a + k));
  }
  
  return max_cnt;
}


int main() {
  freopen("input.txt", "rt", stdin);
  Input();
  cout << Search();
  return 0;
}