#include <iostream>
#include <climits>
#include <string>
#define MAX_N 20
using namespace std;
/*
독서실의 거리두기 5
해설 풀이
*/

int n;
string seat;
void Input() {
  cin >> n >> seat;
}

int MinDist() {
  int min_dist = n;
  // 둘 다 1인 곳에 대해
  // 모든 쌍을 조사하여, 그 중 가장 가까운 거리를 구합니다.
  for (int i = 0; i < n; i++)
  {
    for (int j = i + 1; j < n; j++)
    {
      if(seat[i] == '1' && seat[j] == '1')
        min_dist = min(min_dist, j - i);
    }
  }
  return min_dist;
}


int Search() {
  int ans = 0;
  // 들어갈 위치를 일일이 정해보며
  // 그 상황에서 가장 가까운 사람간의 거리를 구해
  // 가능한 경우 중 최댓값을 계산합니다.
  for (int i = 0; i < n; i++)
  {
    if(seat[i] == '0') {
      // 비어 있는 위치에 인원을 배치합니다.
      seat[i] = '1';
      // 가장 가까운사람 간의 거리를 구해 최댓값을 갱신해줍니다. 
      ans = max(ans, MinDist());
      // 다시 채워줬던 값을 되돌려줍니다.
      seat[i] = '0';
    }
  }
  return ans;
}


int main() {
  freopen("input.txt", "rt", stdin);
  Input();
  cout << Search();
  return 0;
}