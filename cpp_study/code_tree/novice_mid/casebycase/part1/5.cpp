#include <iostream>
#include <algorithm>
#include <climits>
#define MAX_N 100
using namespace std;
/*
전부 겹치는 선분 2
내 풀이
*/

int n;
int x1[MAX_N+ 1], x2[MAX_N + 1];

void Input()
{
  cin >> n;
  for (int i = 0; i < n; i++)
  {
    cin >> x1[i] >> x2[i];
  }
}


int main()
{
  freopen("input.txt", "rt", stdin);
  Input();
  for (int i = 0; i < n; i++)
  {
    int max_x1 = INT_MIN;
    int min_x2 = INT_MAX;

    for (int j = 0; j < n; j++)
    {
      if (j == i) continue;
      max_x1 = max(max_x1, x1[j]);
      min_x2 = min(min_x2, x2[j]);
    }

    if (min_x2 >= max_x1)
    {
      cout << "Yes";
      return 0;
    }
  }
  cout << "No";
  return 0;
}