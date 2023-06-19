#include <iostream>
#include <climits>
#define MAX_N 100
#define MAX_H 1000
using namespace std;
/*
빙산의 일각 2
해설 풀이
*/

int n;
int h[MAX_N + 1];

void Input() {
  cin >> n;
  for (int i = 0; i < n; i++)
  {
    cin >> h[i];
  }
}

int Search() {
  int max_cnt = 0;
  for (int k = 1; k < MAX_H; k++)
  { 
    // 물의 높이가 i일 때 빙산 덩어리의 갯수를 구합니다. 
    int cnt = 0;

    // 가장 왼쪽에 빙산이 있는 경우의 예외를 처리해줍니다. 
    if(h[0] > k) cnt++;

    // 바로 앞 블록은 해수면에 잠겨 있고
    // 자기 자신의 블록은 해수면 위에 떠 있는 경우,
    // 자기 자신 블록 부터 시작하는 빙산이 하나 더 있는 경우이다.
    for(int i= 1; i< n; i++){
      if(h[i]> k && h[i - 1] <= i) cnt++; 
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