#include <iostream>
#define MAX_N 1000

using namespace std;
/*
T를 초과하는 연속 부분 수열
내 풀이
*/

int main()
{
  freopen("input.txt", "rt", stdin);
  int n, t;
  cin >> n >> t;
  int arr[n];
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }

  int max = 0;
  int cnt = 0;
  for(int i = 0; i < n; i++) {
    if (arr[i] > t)
    {
      cnt++;
    } else {
      cnt = 0;
    }
    if(cnt > max) max = cnt;
  }

  cout << max;
  return 0;
}