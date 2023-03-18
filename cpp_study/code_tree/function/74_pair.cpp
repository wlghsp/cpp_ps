#include <iostream>
#include <tuple>
#include <algorithm>
#include <utility>
using namespace std;
/*
원점으로부터의 거리
: 해설 pair 풀이
*/

int GetDistFromOrigin(int x, int y) {
  return abs(x) + abs(y);
}

int main() {
  freopen("input.txt", "rt", stdin);
  int n;
  cin >> n;
  pair<int, int> distances[n];
  for(int i = 0; i < n; i++) {
    int x, y;
    cin >> x >> y;
    distances[i] = make_pair(GetDistFromOrigin(x, y), i+1);
  }
  sort(distances, distances + n);
  for(int i = 0; i < n; i++)
    cout << distances[i].second << endl;
  return 0;
}