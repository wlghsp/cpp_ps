#include <iostream>
#include <climits>
#define MAX_N 100
#define MAX_NUM 100
using namespace std;
/*
훌륭한 점프
해설 풀이
*/

int n, k;
int arr[MAX_N];
int max_val = 0;

void Input() {
  cin >> n >> k;
  for (int a = 0; a < n; a++)
  {
    cin >> arr[a];
    max_val = max(max_val, arr[a]);
  }
}

int IsPossible(int limit) {
  // 마지막 index로 부터
  // 숫자 limit를 넘지 않으면서
  // 거리 k 이내로 계속 이동이 가능한지를 판단합니다. 
  int last_idx = 0;
  for(int i = 1; i < n; i++) {
    if(arr[i] <= limit) {
      if(i - last_idx > k)
        return false;
      last_idx = i;
    }
  }
  return true;
}

int Search() {
  // 밝으며 지나간 최댓값을 i라고 가정했을 때
  // 거리 k 이내로 점프하며 끝까지 도달하는 것이
  // 가능한지를 살펴봅니다. 
  // 가능하다면, 그때의 i가 최솟값이므로
  // 답을 출력하고 종료합니다.
  for (int i = max(arr[0], arr[n-1]); i <= MAX_NUM; i++)
  {
    if(IsPossible(i)) {
      cout << i;
      break;
    }
  }
}


int main() {
  freopen("input.txt", "rt", stdin);
  Input();
  cout << Search();
  return 0;
}