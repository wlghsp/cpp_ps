#include <iostream>
#define MAX_N 1000
#define MAX_R 1000

using namespace std;
/*
연속되는 수 3
내 풀이
*/

int main()
{
  freopen("input.txt", "rt", stdin);
  int n;
  cin >> n;
  int arr[n];
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }
  int max = 0;
  int cnt = 0;
  for(int i = 0; i < n; i++) {
    // if (i >= 1 && (arr[i-1] ^ arr[i]) >= 0)
    if (i >= 1 && (arr[i-1] * arr[i]) > 0)
    {
      cnt++;
    } else {
      cnt = 1;
    }
    if(cnt > max) max = cnt;
  }

  cout << max;
  return 0;
}