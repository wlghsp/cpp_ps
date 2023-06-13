#include <iostream>
#define MAX_N 1000
using namespace std;
/*
데이터센터의 온도 조정 2
내 풀이

*/

int N, C, G, H;
int Ta[MAX_N + 1];
int Tb[MAX_N + 1];

void Input() {
  cin >> N >> C >> G >> H;
  for (int i = 0; i < N; i++)
  {
    cin >> Ta[i] >> Tb[i];
  }
}


int Search() {
  int max_workload = 0;
  for (int i = 0; i < MAX_N + 1; i++)
  {
    int sum = 0;
    for (int j = 0; j < N; j++)
    {
      int ta = Ta[j], tb = Tb[j];
      if(i < ta) sum += C;
      else if (ta <= i &&  i <= tb) sum += G;
      else if (tb < i) sum += H;
    }
    max_workload = max(sum, max_workload);
  }

  return max_workload;
}


int main() {
  freopen("input.txt", "rt", stdin);
  Input();
  cout << Search();
  return 0;
}