#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
/*
단어 정렬
: 내 풀이
*/


int main()
{
  freopen("input.txt", "rt", stdin);
  int n;
  cin >> n;
  string arr[n];
  for(int i = 0; i < n; i++) {
      cin >> arr[i];
  }
  sort(arr, arr + n);
  for(int i = 0; i < n; i++)
    cout << arr[i] << '\n';
  return 0;
}
