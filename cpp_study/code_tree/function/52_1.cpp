#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
/*
두 개의 동일한 수열
: 해설 풀이
*/
int n;
bool Equal(int a[], int b[]) {
  for(int i = 0; i < n; i++) {
    if(a[i] != b[i]) return false;
  }
  return true;
}


int main()
{
  freopen("input.txt", "rt", stdin);
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
  
  if(Equal(a, b)) {
    cout << "Yes";
  } else {
    cout << "No";
  }
  return 0;
}
