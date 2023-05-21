#include <iostream>
#include <algorithm>
#include <cmath>
#define MAX_N 6
using namespace std;

/*
두가지로 열리는 자물쇠
내 풀이 (chatgpt 풀이)
*/

int N;
int a1, b1, c1, a2, b2, c2;

void Input() {
  cin >> N;
  cin >> a1 >> b1 >> c1;
  cin >> a2 >> b2 >> c2;
}

int Calculate(int x, int y, int z, int target_x, int target_y, int target_z) {
  int dx = min(abs(x - target_x), N - abs(x - target_x));
  int dy = min(abs(y - target_y), N - abs(y - target_y));
  int dz = min(abs(z - target_z), N - abs(z - target_z));
  return (dx <= 2 && dy <= 2 && dz <= 2);
}

int Search() {
  int cnt = 0;
  for (int i = 1; i <= N; i++) {
    for (int j = 1; j <= N; j++) {
      for (int k = 1; k <= N; k++) { 
        if (Calculate(i, j, k, a1, b1, c1) || Calculate(i, j, k, a2, b2, c2)) {
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
