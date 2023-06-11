#include <iostream>
#include <algorithm>
#include <climits>
#define MAX_N 100
#define MAX_BOMB 1000
using namespace std;
/*
이상한 폭탄 2
내 풀이
*/

int K, N;
int num[MAX_N ];

int main() {
  freopen("input.txt", "rt", stdin);
  for(int i = 0; i < N; i++) cin >> num[i];
  int ans = -1;
  for (int i = 0; i < N; i++)
  {
    for (int j = i + 1; j < N; j++)
    {
        // 거리가 K를 초과하는 경우 넘어간다. 
        if (j - i > K) break;
        // 두 폭탄의 번호가 다를 경우 터지지 않음 
        if(num[i] != num[j]) continue;
        ans = max(ans, num[i]);
    }
  }
  cout << ans;
  return 0;
}