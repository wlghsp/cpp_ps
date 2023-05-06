#include <iostream>
// #include <string>
#define MAX_N 1000
#define MAX_T 1000000

using namespace std;
/*
선두를 지켜라 3
내 풀이
*/

int n, m;
int pos_a[MAX_T + 1], pos_b[MAX_T + 1];
string hallOfFame[MAX_T + 1];

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

  for(int i = 1; i < time_a; i++) {
    if (pos_a[i] > pos_b[i])
    {
      hallOfFame[i] = "A";
    } else if(pos_a[i] < pos_b[i]) {
      hallOfFame[i] = "B";  
    } else if (pos_a[i] == pos_b[i]) {
      hallOfFame[i] = "AB";  
    }
  }

  int cnt = 0;
  for(int i = 1; i < time_a; i++) {
    if(hallOfFame[i].compare(hallOfFame[i-1]) != 0) cnt++;
  }

  cout << cnt;

  return 0;
}