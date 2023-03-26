#include <iostream>
#define MAX_N 100
#define MAX_R 2000
#define OFFSET 1000
using namespace std;
/*
왔다 갔던 구역 2
해설 풀이
*/

int n;
int x1[MAX_N], x2[MAX_N];

int checked[MAX_R + 1];

int main() {
  freopen("input.txt", "rt", stdin);
  cin >> n;

  int cur = 0;

  for(int i = 0; i < n; i++) {
    int distance;
    char direction;
    cin >> distance >> direction;

    if (direction == 'L')
    { // 왼쪽으로 이동할 경우 : cur - distance ~ cur까지 경로 이동
      x1[i] = cur - distance;
      x2[i] = cur;
      cur -= distance;
    }
    else {
      // 오른쪽으로 이동할 경우 : cur ~ cur + distance 까지 경로 이동
      x1[i] = cur;
      x2[i] = cur + distance;
      cur += distance;
    }

    // OFFSET을 더해줍니다. 
    x1[i] += OFFSET;
    x2[i] += OFFSET;
  }
  // 구간을 칠해줍니다. 
  // x2[i]에 등호가 들어가지 않음에 유의합니다. 
  // 구간 단위로 진행하는 문제이므로
  for(int i = 0; i < n; i++)
    for(int j = x1[i]; j < x2[i]; j++)
      checked[j]++;

  // 2번 이상 지나간 영역의 크기를 구합니다. 
  int cnt = 0;
  for(int i = 0; i <= MAX_R; i++)
    if(checked[i] >= 2)
      cnt++;
  
  cout << cnt;
  return 0; 
}