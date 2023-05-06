#include <iostream>
#define MAX_T 1000000
using namespace std;
/*
선두를 지켜라
내 풀이
*/

int n, m;
int a[MAX_T + 1], b[MAX_T + 1];


int main()
{
  freopen("input.txt", "rt", stdin);
  cin >> n >> m;
  int v, t;
  int time_a = 1;
  for(int i = 0; i < n; i++) {
    cin >> v >> t;
    while (t--)
    {
      a[time_a] = a[time_a - 1] + v;
      time_a++;
    }
  }
  int time_b = 1;
  for(int i = 0; i < m; i++) {
    cin >> v >> t;
    while (t--)
    {
      b[time_b] = b[time_b - 1] + v;
      time_b++;
    }
  }

  int leader = 0, cnt = 0;
  for(int i = 1; i < time_a; i++) {
    if (a[i] > b[i])
    {
      if(leader == 2) 
        cnt++;
      leader = 1;
    } else if(a[i] < b[i]) {
      if(leader == 1) 
        cnt++;
      leader = 2;
    }
  }
  cout << cnt;
  return 0;
}