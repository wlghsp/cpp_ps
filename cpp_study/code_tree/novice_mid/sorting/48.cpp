#include <iostream>
#include <algorithm>
using namespace std;
/*
오름 내림차순 정렬
: 내 풀이
*/


int main()
{
  freopen("input.txt", "rt", stdin);
  int n;
  cin >> n;
  int arr[n];
  for(int i = 0; i < n; i++) {
    cin >> arr[i];
  }
  sort(arr, arr + n);
  for(int i = 0; i < n; i++) cout << arr[i] << " ";
  cout << '\n';
  sort(arr, arr+n, greater<int>());
  for(int i = 0; i < n; i++) cout << arr[i] << " ";
  return 0;
}
