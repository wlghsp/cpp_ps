#include <iostream>
#include <climits>
#include <string>
#define MAX_N 10
#define MAX_NUM 10000
using namespace std;
/*
가장 작은 x 찾기
해설 풀이
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

bool Satisfy(int x) {
  for (int i = 0; i < n; i++)
  {
    // 계속 2배 씩 해주며
    // a[i] <= x <= b[i]를 항상 만족하는지 확인합니다.
    // 아니라면, false를 반환합니다. 
    x *= 2;
    if (x < a[i] || x > b[i])
      return false;
  }
  return true;
}

int main() {
  freopen("input.txt", "rt", stdin);
  Input();
  // 가능한 모든 범위에 대해 탐색해봅니다. 
  // 1 ~ MAX_NUM 사이가 아니라면 애초에 처음부터 불가능합니다. 
  for (int x = 0; x <= MAX_NUM; x++)
  {
    // 만족하는 x가 있다면,
    // 해당 x가 최소이므로 출력합니다. 
    if(Satisfy(x)) {
      cout << x;
      break;
    }
  }
  return 0;
}