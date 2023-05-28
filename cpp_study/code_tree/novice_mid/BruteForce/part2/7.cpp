#include <iostream>
#include <algorithm>
#include <climits>
#define MAX_N 100
using namespace std;

/*
가장 가까운 두 점 사이의 거리
내 풀이
*/

int n;
int x[MAX_N], y[MAX_N];

void Input() {
  cin >> n;
  for (int i = 0; i < n; i++)
  {
    cin >> x[i] >> y[i];
  }
}

int distance(int i, int j) {
  return (x[i] - x[j]) * (x[i] - x[j]) + (y[i] - y[j]) * (y[i] - y[j]);
}

int Search() {
  int min_dist = INT_MAX;
  int p1, p2;
  for(int i = 0; i < n; i++) {
    for(int j = i + 1;  j < n; j++) {
      int dist = distance(i, j);
      if(dist < min_dist) {
        min_dist = dist;
      }
    }
  }
   
  return min_dist; 
}


int main() {
  freopen("input.txt", "rt", stdin);
  Input();
  cout << Search();
  return 0;
}