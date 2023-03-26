#include <iostream>
#define MAX_N 200
#define MAX_X 10
using namespace std;
/*
왔다 갔던 구역 2
내 풀이
*/

int n, x;
char direction;
int line[MAX_N + 1];

int main() {
  freopen("input.txt", "rt", stdin);
  cin >> n;
  int cur_d = 100;
  for(int i = 0; i < n; i++){
    cin >> x >> direction;
    if(direction == 'R') {
      for(int j = cur_d; j < cur_d + x; j++) {
        line[j]++;
      }
      cur_d += x;
    } else {
      for(int j = cur_d - 1; j >= cur_d - x; j--) {
        line[j]++;
      }
      cur_d -= x;
    }
  }
  int cnt = 0;
  for(int i = 0; i <= MAX_N; i++) {
    if (line[i] >= 2)
    {
      cnt++;
    } 
  }
  cout << cnt;
  return 0; 
}