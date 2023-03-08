#include <iostream>
#include <algorithm>
using namespace std;
/*
재귀함수를 이용한 최댓값
: 해설 풀이
*/
#define MAX_N 100

int arr[MAX_N];

int MaxValue(int a)
{
  if (a == 0) return arr[0];
  return max(MaxValue(a-1), arr[a]);
}

int main()
{
  freopen("input.txt", "rt", stdin);
  int n;
  cin >> n;
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }
  cout << MaxValue(n-1);
  return 0;
}
