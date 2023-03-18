#include <iostream>
#include <algorithm>
#include <utility>
using namespace std;
/*
정렬된 숫자 위치 알아내기
: 내 풀이
*/


int main() {
  freopen("input.txt", "rt", stdin);
  int n;
  cin >> n;
  pair<int, int> sorted[n];
  pair<int, int> arr[n];
  for(int i = 0; i < n; i++) {
    int t;
    cin >> t;
    arr[i] = make_pair(t, i+1);
    sorted[i] = make_pair(t, i+1);
  }
  sort(sorted, sorted + n);
  for(int i = 0; i < n; i++)
    for(int j = 0; j < n; j++) {
      if(arr[i].first == sorted[j].first && arr[i].second == sorted[j].second){
        cout << j+1 << " ";
      }
    }
    
  return 0;
}