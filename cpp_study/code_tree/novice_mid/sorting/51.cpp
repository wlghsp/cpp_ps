#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
/*
Top k 숫자 구하기
: 내 풀이
*/


int main()
{
  freopen("input.txt", "rt", stdin);
  int n, k;
  cin >> n >> k;
  int arr[n];
  for(int i = 0; i < n; i++) {
      cin >> arr[i];
  }
  sort(arr, arr + n);
  cout << arr[k - 1];
  return 0;
}
