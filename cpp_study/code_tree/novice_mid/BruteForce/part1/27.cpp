#include <iostream>
#include <climits>
#define MAX_N 100
using namespace std;

/*
아름다운 수열 2
내 풀이
*/

int N, M;
int arr1[MAX_N];
int arr2[MAX_N];

void Input() {
  cin >> N >> M;
  for (int i = 0; i < N; i++) cin >> arr1[i];
  for (int i = 0; i < M; i++) cin >> arr2[i];
}

int Search() {
  int cnt = 0;
   for (int i = 0; i < N - M; i++)
  {
    for (int  j = i; j < i + M; j++)
    {
      int match = 0;
      for (int  k = 0; k < M; k++) {
        if (arr1[j] == arr2[k])
        {
          match++;
        }
      }
      if(match == M) cnt++;
    }
  }
  return cnt;
}


int main() {
  freopen("input.txt", "rt", stdin);
  Input();
  cout << Search();
  return 0;
}