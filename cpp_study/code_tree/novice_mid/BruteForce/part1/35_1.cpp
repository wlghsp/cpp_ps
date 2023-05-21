#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

/*
두가지로 열리는 자물쇠
해설 풀이
*/

int N;
int a1, b1, c1, a2, b2, c2;

void Input() {
  cin >> N;
  cin >> a1 >> b1 >> c1;
  cin >> a2 >> b2 >> c2;
}

int Search() {
  int cnt = 0;
  for (int i = 1; i <= N; i++) {
    for (int j = 1; j <= N; j++) {
      for (int k = 1; k <= N; k++) { 
        // 첫 번째 조합과의 확인
        if ((
            (abs(a1 - i) <= 2 || abs(a1 - i) >= N - 2) &&
            (abs(b1 - j) <= 2 || abs(b1 - j) >= N - 2) &&
            (abs(c1 - k) <= 2 || abs(c1 - k) >= N - 2) 
        ))
        {
          cnt++;
        }
        // 두 번째 조합과의 확인
        else if ((
            (abs(a2 - i) <= 2 || abs(a2 - i) >= N - 2) &&
            (abs(b2 - j) <= 2 || abs(b2 - j) >= N - 2) &&
            (abs(c2 - k) <= 2 || abs(c2 - k) >= N - 2) 
        )) {
            cnt++;
        }
        
      }
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
