#include <iostream>
#include <algorithm>
#include <climits>
#define MAX_N 100
#define MAX_AB 1000
using namespace std;

/*
겹치지 않는 선분 2
해설 풀이

언제 겹치는지 파악이 어렵다. 
그리고 선분 하나를 잡고 다른 선분들과 비교해서 겹치는지 확인한다는 개념

*/

int n;
int x1[MAX_N], x2[MAX_N];

void Input() {
  cin >> n;
  for (int i = 0; i < n; i++)
  {
    cin >> x1[i] >> x2[i];
  }
}


int Search() {
  int cnt = 0;
  for(int i = 0; i < n; i++) {
    // i번째 선분이 다른 선분과 겹치지 않는지 확인
    bool crossed = false;
    for(int j = 0; j < n; j++) {
      // 자기 자신 제외
      if(i== j) continue;

      // x1이 큰 쪽 선분이 x2가 더 작다면 겹치게 됨 
      if ((x1[i] >= x1[j] && x2[i] <= x2[j]) ||
        (x1[i] <= x1[j] && x2[i] >= x2[j])
      ) {
        crossed = true;
        break;
      }
    }
    if(!crossed) cnt++;
  }
  return cnt; 
}


int main() {
  freopen("input.txt", "rt", stdin);
  Input();
  cout << Search();
  return 0;
}