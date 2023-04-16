#include <iostream>
#define MAX_T 1000000

using namespace std;
/*
선두를 지켜라 3
해설 풀이
*/

int n, m;
int pos_a[MAX_T + 1], pos_b[MAX_T + 1];

int main()
{
  freopen("input.txt", "rt", stdin);
  cin >> n >> m;
  int time_a = 1;
  for(int i = 0; i < n; i++) {
    int v, t;
    cin >> v >> t;
    while (t--)
    {
      pos_a[time_a] = pos_a[time_a - 1] + v;
      time_a++;
    }
  }

  int time_b = 1;
  for(int i = 0; i < m; i++) {
    int v, t;
    cin >> v >> t;
    while (t--)
    {
      pos_b[time_b] = pos_b[time_b - 1] + v;
      time_b++;
    }
  }
  // A과 B 중 더 앞서 있는 경우를 확인합니다. 
  // A가 리더면 1, B가 리더면 2, 둘 다 리더면 3으로 관리합니다. 
  int leader = 0, cnt = 0;
  for(int i = 1; i < time_a; i++) {
    if (pos_a[i] > pos_b[i])
    {
      if(leader != 1) {
        cnt++;
      }
      leader = 1;
    } else if(pos_a[i] < pos_b[i]) {
      if(leader != 2) {
        cnt++;
      }
      leader = 2;
    } else if (pos_a[i] == pos_b[i]) {
      if(leader != 3) {
        cnt++;
      }
      leader = 3;
    }
  }
  cout << cnt;

  return 0;
}