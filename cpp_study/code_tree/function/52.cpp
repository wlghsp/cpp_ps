#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
/*
두 개의 동일한 수열
: 내 풀이
*/


int main()
{
  freopen("input.txt", "rt", stdin);
  int n;
  cin >> n;
  int a[n], b[n];
  for(int i = 0; i < n; i++) {
      cin >> a[i];
  }
  for(int i = 0; i < n; i++) {
      cin >> b[i];
  }
  sort(a, a + n);
  sort(b, b + n);
  for(int i = 0; i < n; i++)
    if(a[i] != b[i]) {
      cout << "No";
      return 0;
    }
  
  cout << "Yes";
  return 0;
}
