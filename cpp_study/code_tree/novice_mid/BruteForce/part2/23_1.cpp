#include <iostream>
#include <climits>
#define MAX_T 100
using namespace std;
/*
정보에 따른 숫자 2
해설 풀이
*/

int T, a, b;
int s[MAX_T], n[MAX_T];
int cnt_s, cnt_n;

void Input() {
  cin >> T >> a >> b;
  for (int i = 0; i < T; i++)
  {
    char x;
    int y;
    cin >> x >> y;
    if(x == 'S') s[cnt_s++] = y;
    else n[cnt_n++] = y;
  }
}

int Search() {
  int cnt = 0;
  for (int i = a; i <= b; i++)
  {
    int distance_s = INT_MAX;
    int distance_n = INT_MAX;
    for (int j = 0; j < cnt_s; j++)
    {
      distance_s = min(distance_s, abs(s[j] - i));
    }
    for (int j = 0; j < cnt_n; j++)
    {
      distance_n = min(distance_n, abs(n[j] - i));
    }
    
    if(distance_s <= distance_n) cnt++;
  }

  return cnt;
}


int main() {
  freopen("input.txt", "rt", stdin);
  Input();
  cout << Search();
  return 0;
}