#include <iostream>
#include <tuple>
#include <algorithm>
#include <vector>
using namespace std;
/*
줄 세우기 : 튜플 풀이
*/

using namespace std;


int main() {
  freopen("input.txt", "rt", stdin);
  int n;
  cin >> n;
  vector<tuple<int, int, int>> persons;
  for(int i = 0; i < n; i++) {
    int h, w;
    cin >> h >> w;
    persons.push_back(make_tuple(-h, -w, i+1));
  }
  sort(persons.begin(), persons.end());
  for(auto p: persons) {
    int h, w, n;
    tie(h, w, n) = p;
    cout << -h << " " << -w << " " << n << '\n';
  }
  return 0;
}