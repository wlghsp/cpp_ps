#include <iostream>
#include <algorithm>
#include <climits>
#define MAX_N 100
#define MAX_AB 1000
using namespace std;

/*
운행 되고 있는 시간
내 풀이
*/

int n;
int a[MAX_N], b[MAX_N];

void Input() {
  cin >> n;
  for (int i = 0; i < n; i++)
  {
    cin >> a[i] >> b[i];
  }
}

int Search() {
  int ans = INT_MIN;
  for(int i = 0; i < n; i++) {


    int count[MAX_AB] = {};
    for (int j = 0; j < n; j++)
    {
      // i번째 점은 제외
      if(j == i) continue;
      // 모든 구간 카운팅
      for(int k = a[j]; k < b[j]; k++) count[k]++;
    }
    
    int time = 0;
    for(int j = 1; j< MAX_AB; j++) {
      if(count[j]) time++;
    }
    ans = max(ans, time);
  } 
  return ans; 
}


int main() {
  freopen("input.txt", "rt", stdin);
  Input();
  cout << Search();
  return 0;
}