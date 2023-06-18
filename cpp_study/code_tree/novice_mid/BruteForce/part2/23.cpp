#include <iostream>
#include <climits>
#define MAX_T 100
using namespace std;
/*
정보에 따른 숫자 2
내 풀이
*/

int T, a, b;
pair<char, int> arr[MAX_T + 1];

void Input() {
  cin >> T >> a >> b;
  for (int i = 0; i < T; i++)
  {
    cin >> arr[i].first >> arr[i].second;
  }
}

int Search() {
  int cnt = 0;

  for (int i = a; i <= b; i++)
  {
    int min_dist_from_S = INT_MAX;
    int min_dist_from_N = INT_MAX;
    for (int j = 0; j < T; j++)
    {
      if(arr[j].first == 'S') {
        int d1 = abs(arr[j].second - i); 
        min_dist_from_S = min(d1, min_dist_from_S);
      }
      if(arr[j].first == 'N') {
        int d2 = abs(arr[j].second - i); 
        min_dist_from_N = min(d2, min_dist_from_N);
      }
    }
    if(min_dist_from_S <= min_dist_from_N) cnt++;
  }

  return cnt;
}


int main() {
  freopen("input.txt", "rt", stdin);
  Input();
  cout << Search();
  return 0;
}