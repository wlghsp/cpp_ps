#include <iostream>
#include <algorithm>
#include <utility>
#include <vector>
using namespace std;
/*
정렬된 숫자 위치 알아내기
: 내 풀이
*/


int main() {
  freopen("input.txt", "rt", stdin);
  int n;
  cin >> n;
  vector<pair<int, int>> numbers;
  int answer[n];
  for(int i = 0; i < n; i++) {
    int t;
    cin >> t;
    numbers.push_back(make_pair(t, i));
  }

  sort(numbers.begin(), numbers.end());
  for(int i = 0; i < n; i++)
    answer[numbers[i].second] = i + 1;
  for(int i = 0; i < n; i++)
    cout << answer[i] << " ";

  return 0;
}