#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
/*
k번째로 신기한 문자열
: 내 풀이
*/

int main()
{
  freopen("input.txt", "rt", stdin);
  int n, k;
  string t;
  cin >> n >> k >> t;
  string arr[n];
  for(int i = 0; i < n; i++) {
    cin >> arr[i];
  }
  sort(arr, arr + n);
   for(int i = 0; i < n; i++) {
    if(arr[i].substr(0, t.size()).compare(t) == 0) {
        k--;
        if(k == 0) {
          cout << arr[i];
          return 0;
        }
    }
  }
  return 0;
}
