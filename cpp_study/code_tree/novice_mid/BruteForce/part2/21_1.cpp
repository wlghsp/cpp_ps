#include <iostream>
#define MAX_N 1000
#define MAX_T 1000
using namespace std;
/*
데이터센터의 온도 조정 2
해설 풀이
*/

int N, C, G, H;
int Ta[MAX_N];
int Tb[MAX_N];

void Input() {
  cin >> N >> C >> G >> H;
  for (int i = 0; i < N; i++)
  {
    cin >> Ta[i] >> Tb[i];
  }
}

// 특정 장비의 t 온도에서의 작업량을 계산합니다. 
int SingleEfficiency(int low, int high, int t) {
  if (t < low) return C;
  else if (t <= high) return G;
  else return H;
}


int Performance(int t) {
  int total_efficiency = 0;

  for(int i = 0; i < N; i++) {
    total_efficiency += SingleEfficiency(Ta[i], Tb[i], t);
  }
  return total_efficiency;
}


int Search() {
  int max_workload = 0;

  // 0~1000까지의 온도를 탐색 
  for (int t = 0; t <= MAX_N; t++)
  {
    max_workload = max(max_workload, Performance(t));
  }

  return max_workload;
}


int main() {
  freopen("input.txt", "rt", stdin);
  Input();
  cout << Search();
  return 0;
}