#include <iostream>
#include <algorithm>
#include <climits>
#define MAX_N 10
#define MAX_AB 100
using namespace std;
/*
선분 3개 지우기
해설 풀이
*/

int n;
int l[MAX_N], r[MAX_N];



int main() {
  freopen("input.txt", "rt", stdin);
  cin >> n;

  for(int i = 0; i < n; i++)
    cin >> l[i] >> r[i];

  
  int ans = 0;
  for (int i = 0; i < n; i++)
  {
    for (int j = i + 1; j < n; j++)
    {
      for (int k = j + 1; k < n; k++)
      {
        bool overlap = false;
        int arr[MAX_AB + 1] = {};

        for (int x = 0; x < n; x++)
        {
          if (x == i || x == j || x == k) continue;
          
          for (int y = l[x]; y <= r[x]; y++)
          {
            arr[y]++;
          }
        }

        for (int x = 0; x <= MAX_AB; x++)
        {
          if (arr[x] > 1)
          {
            overlap = true;
          }
          
        }
        if(!overlap) ans++;
      }
    }
  }
  
  cout << ans;
  return 0;
}