#include <iostream>
using namespace std;
/*
재귀함수를 이용한 최소공배수
: 내 풀이
*/
typedef long long int ll;

int GCD(int a, int b)
{
  if (b ==  0)
  {
    return a;
  }
  return GCD(b, a % b);
  
}

ll FindLCM(int arr[], int n) {
  ll ans = arr[0];

  for(int i = 1; i < n; i++) {
    ans = (((arr[i] * ans)) / (GCD(arr[i], ans)));
  }
  return ans;
}

int main()
{
  freopen("input.txt", "rt", stdin);
  int n;
  cin >> n;
  int arr[n];
  for(int i = 0; i < n; i++) {
    cin >> arr[i];
  }
  cout << FindLCM(arr, n);
  return 0;
}
