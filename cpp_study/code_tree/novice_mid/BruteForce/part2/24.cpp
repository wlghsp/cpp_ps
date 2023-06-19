#include <iostream>
#include <climits>
#define MAX_N 100
using namespace std;
/*
등차수열
내 풀이
*/

int n;
int arr[MAX_N + 1];

void Input() {
  cin >> n;
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }
}

int Search() {
  int max_cnt = 0;
  for (int k = 1; k < MAX_N + 1; k++) {
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
      for (int j = i + 1; j < n; j++)
      {
        // if((k - arr[i]) == (arr[j] - k)) cnt++; 
        // 등차수열에서 어떤 수의 앞 뒤를 더한 값은 그 수의 2배와 같다.
        if((arr[i] + arr[j]) == k * 2) cnt++; 
      }
    }
    max_cnt = max(cnt, max_cnt);
  }
  return max_cnt;
}


int main() {
  freopen("input.txt", "rt", stdin);
  Input();
  cout << Search();
  return 0;
}