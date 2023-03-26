#include <iostream>
using namespace std;
/*
재귀함수를 이용한 최댓값
: 내 풀이
*/
#define MAX_N 101

int arr[MAX_N];

int getMax(int n)
{
  if (n == 0)
  {
    return arr[0];
  }
  int max = getMax(n - 1);
  arr[n] = max < arr[n] ? arr[n] : max;

  return arr[n];
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
  cout << getMax(n);
  return 0;
}
