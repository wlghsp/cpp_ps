#include <iostream>
#include <climits>
#include <vector>
#define MAX_N 100
using namespace std;
/*
숫자 2배 후 하나 제거하기
내 풀이
*/

int n;
int arr[MAX_N + 1];

void Input() {
  cin >> n;
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }
}

int Score(int removed_idx) {
  // 합을 계산합니다. 
  int sum = 0;

  // 바로 직전에 적혀 있던 숫자를 기록합니다.
  // -1인 경우, 아직 숫자가 기록된 적이 없다는 뜻입니다. 
  int prev = -1;

  // 각 숫자들을 순회합니다. 
  for (int i = 0; i < n; i++)
  {
    // 지워진 원소라면 패스합니다. 
    if (i == removed_idx) continue;

    // 이전에 적혀 있던 숫자가 있는 경우에만
    // 인접한 숫자간의 차를 sum에 더해줍니다. 
    if (prev != -1)
      sum += abs(arr[i] - prev);
      
    // 마지막으로 적혀 있던 숫자 값을 갱신해줍니다. 
    prev = arr[i];
  }

  // 인접한 원소간의 차의 합을 반환합니다.
  return sum;
}


int Search() {
  int min_diff = INT_MAX;

  // 2배를 할 숫자의 위치 i를 결정하고,
  // 그 다음 제거할 숫자의 위치 j를 결정하여
  // 남은 숫자들의 인접한 차의 합 중
  // 최솟값을 찾습니다. 
  for (int i = 0; i < n; i++)
  {
    arr[i] *= 2;
    for (int j = 0; j < n; j++)
    {
      min_diff = min(Score(j), min_diff);
    }
    arr[i] /= 2;
  }
  // 그 다음 상태 진행을 위해
  // 이전에 2배를 한 값을 다시 이전 상태로 만들어줍니다.
  return min_diff;
}


int main() {
  freopen("input.txt", "rt", stdin);
  Input();
  cout << Search();
  return 0;
}