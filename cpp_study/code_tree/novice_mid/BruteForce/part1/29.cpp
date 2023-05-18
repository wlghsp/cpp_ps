#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
#define MAX_N 100
using namespace std;

/*
G or H 2
내 풀이
*/

int N;
vector<pair<int, char>> v;

void Input() {
  cin >> N;
  for (int i = 0; i < N; i++) {
      int point;
      char c;
      cin >> point >> c;
      v.push_back(make_pair(point, c));
  }
}

int Search() {
  sort(v.begin(), v.end(), [](const pair<int, char>& a, const pair<int, char>& b) {
      return a.first < b.first;
  });
  int max_size = INT_MIN;
  if (N == 1) return 0;

  for(int i = 0; i < N; i++) {
    for(int j = i; j < N; j++) {
        if(i == j) continue;
        int g = 0, h = 0;
        for(int k = i; k <= j; k++) {
          if(v[k].second == 'G') g++;
          else h++;
        }
        if (g == 0 || h == 0 || g == h) {
            int size = abs(v[i].first - v[j].first);
            max_size = max(max_size, size);
        }
    }
  }
  return max_size;
}


int main() {
  freopen("input.txt", "rt", stdin);
  Input();
  cout << Search();
  return 0;
}