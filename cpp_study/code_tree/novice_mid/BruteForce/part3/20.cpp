#include <iostream>
#include <climits>
#define MAX_N 100
#define MAX_NUM 100
using namespace std;
/*
훌륭한 점프
내 풀이

최댓값 중에서 최솟값을 찾는 문제
*/

int n, k;
int arr[MAX_N];
int max_val = 0;

void Input() {
  cin >> n >> k;
  for (int a = 0; a < n; a++)
  {
    cin >> arr[a];
    max_val = max(max_val, arr[a]);
  }
}

int IsPossible(int max_num) {
  int available_indices[MAX_N] = {};
  int cnt = 0;
  for (int i = 0; i < n; i++)
  {
    if(arr[i] <= max_num) {
      available_indices[cnt++] = i;
    }
  }
  for (int i = 1; i < cnt; i++)
  {
    int dist = available_indices[i] - available_indices[i - 1];
    if (dist > k) return false;
  }
  return true;
}

int Search() {
  int min_val = INT_MAX;
  // 첫 번째 돌과 마지막 돌은 밟을 수 있다는 가정이므로
  // 탐색의 시작은 첫 번째 돌의 값과 마지막 돌의 값 중 최댓값을 사용한다.
  for (int i = max(arr[0], arr[n-1]); i <= MAX_NUM; i++)
  {
    if(IsPossible(i)) {
      min_val = min(min_val, i);
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