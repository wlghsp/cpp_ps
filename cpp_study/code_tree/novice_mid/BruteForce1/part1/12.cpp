#include <iostream>
#include <climits>
#define MAX_N 1003
using namespace std;

/*
원 모양으로 되어있는 방
해설 풀이
*/

int n;
int arr[MAX_N];
int ans;

void Input()
{
  cin >> n;
  for (int i = 0; i < n; i++)
  {
    int numOfPeople;
    cin >> numOfPeople;
    arr[i] = numOfPeople;
  }
}

int Search() {
  int minVal = INT_MAX;
  // 각 i번째 집으로 모였을 때의 합을 구한다. 
  for (int i = 0; i < n; i++)
  {
    int sum_dist = 0;
    for (int j = 0; j < n; j++)
    {
      // j 방으로의 이동 거리를 구하고 사람 수를 곱해준다.
      int dist = (j + n - i) % n;
      sum_dist += dist * arr[j];
    }
    minVal = min(minVal, sum_dist);
  }
  return minVal;
}

int main()
{
  freopen("input.txt", "rt", stdin);

  Input();

  ans = Search();

  cout << ans;

  return 0;
}