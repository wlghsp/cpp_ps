#include <iostream>
#include <algorithm>
#include <climits>
#define MAX_N 100
using namespace std;

/*
아름다운 수열 2
해설 풀이
*/

int N, M;
int arr1[MAX_N], arr2[MAX_N];
int tmp[MAX_N];

void Input() {
  cin >> N >> M;
  for (int i = 0; i < N; i++) cin >> arr1[i];
  for (int i = 0; i < M; i++) cin >> arr2[i];
}

int Search() {
  int cnt = 0;
  
  // 2번째 배열 정렬
  sort(arr2, arr2 + M);

  for (int i = 0; i <= N - M; i++)
  {
    for (int j = 0; j < M; j++)
    {
      tmp[j] = arr1[i + j];
    }
    sort(tmp, tmp + M);
    
    bool isSame = true;
    for (int j = 0; j < M; j++)
    {
      if (tmp[j] != arr2[j])
      {
        isSame = false;
        break;
      }
    }
    if (isSame) cnt++;
  }
  
  return cnt;
}


int main() {
  freopen("input.txt", "rt", stdin);
  Input();
  cout << Search();
  return 0;
}