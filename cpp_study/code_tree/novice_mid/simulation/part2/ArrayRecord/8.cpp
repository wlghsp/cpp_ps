#include <iostream>
#define MAX_T 1000000

using namespace std;
/*
좌우로 움직이는 로봇
해설 풀이
*/
int n, m;
int pos_a[MAX_T + 1], pos_b[MAX_T + 1];

int main()
{
  freopen("input.txt", "rt", stdin);
  cin >> n >> m;

  // A가 매 초마다 서있는 위치를 기록
  int time_a = 1;
  for (int i = 0; i < n; i++)
  {
    int t; char d;
    cin >> t >> d;

    while (t--)
    {
      if (d == 'R')
        pos_a[time_a] = pos_a[time_a - 1] + 1;
      else
        pos_a[time_a] = pos_a[time_a - 1] - 1;

      time_a++;
    }
  }

  // B가 매 초마다 서 있는 위치를 기록
  int time_b = 1;
  for (int i = 0; i < m; i++)
  {
    int t; char d;
    cin >> t >> d;

    while (t--)
    {
      if (d == 'R')
        pos_b[time_b] = pos_b[time_b - 1] + 1;
      else
        pos_b[time_b] = pos_b[time_b - 1] - 1;

      time_b++;
    }
  }

  // 시간이 짧은 쪽은 멈춰 있으므로 
  // 멈춘 후는 전부 마지막 위치를 대입해준다.
  if(time_a < time_b) {
    for(int i = time_a; i < time_b; i++) {
      pos_a[i] = pos_a[i - 1];
    }
  } else {
    for(int i = time_b; i < time_a; i++) {
      pos_b[i] = pos_b[i - 1];
    }
  }

  int time = time_a > time_b ? time_a : time_b;
  // 만난 횟수를 구합니다. 
  int ans = 0;
  for(int i = 1; i < time; i++){
    if (pos_a[i] == pos_b[i] && pos_a[i - 1] != pos_b[i - 1]) {
        ans++;
    } 
  }

  cout << ans;
  return 0;
}