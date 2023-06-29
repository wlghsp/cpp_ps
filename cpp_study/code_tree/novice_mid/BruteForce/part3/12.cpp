#include <iostream>
#include <climits>
#include <string>
#define MAX_N 20
using namespace std;
/*
독서실의 거리두기 5
내 풀이

모든 좌석의 갯수 = n
0 = 비어 있음
1 = 차 있음
*/

int n;
string str;
void Input() {
  cin >> n >> str;
}


int Search() {
  int max_val = INT_MIN;
  for (int i = 0; i < n; i++)
  {
    if(str[i] != '1') {
      str.replace(i, 1, "1");
      int min_dist = MAX_N;
      int start = str.find('1');
      int prev = start;
      int dist = 0;
      for (int j = start + 1; j < n; j++)
      {
        if (str[j] == '1') {
          dist = abs(j - prev);
          prev = j;
          min_dist = min(min_dist, dist);
        }
      }
      max_val = max(max_val, min_dist);
      str.replace(i, 1, "0");
    }
  }
  return max_val;
}


int main() {
  freopen("input.txt", "rt", stdin);
  Input();
  cout << Search();
  return 0;
}