#include <iostream>
#include <climits>
#include <algorithm>
#define MAX_N 100
using namespace std;
/*
독서실의 거리두기 4
해설 풀이
*/

int n;
string seat;

void Input() {
  cin >> n >> seat;
}

int MinDist() {
  int min_dist = n;
  for (int i = 0; i < n; i++)
  {
    // 둘 다 1인 곳에 대해
    // 모든 쌍을 조사하여, 그 중 가장 가까운 거리를 구합니다.
    for (int j = i + 1; j < n; j++)
    {
      if (seat[i] == '1' && seat[j] == '1')
      {
        min_dist = min(min_dist, j - i);
      }
    }
  }
  return min_dist;
}

int Search() {
  int ans = 0;
  for (int i = 0; i < n; i++)
  {
    if (seat[i] == '0') {
      seat[i] = '1';
      for (int j = i + 1; j < n; j++)
      {
        if(seat[j] == '0') {
          seat[j] = '1';
          ans = max(ans, MinDist());
          seat[j] = '0';
        }
      }
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