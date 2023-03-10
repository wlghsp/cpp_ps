#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
/*
중앙값 계산 2
: 내 풀이
*/

int main()
{
  freopen("input.txt", "rt", stdin);
  int n;
  cin >> n;
  int arr[n];
  for(int i = 0; i < n; i++) cin >> arr[i];
  for(int i = 0; i < n; i++) {
    if(i % 2 == 0) {
      sort(arr, arr + (i+1));
      cout << arr[i / 2] << " ";
    }
  }
  return 0;
}
