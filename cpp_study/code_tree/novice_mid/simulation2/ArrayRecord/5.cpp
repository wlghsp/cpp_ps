#include <iostream>
#define MAX_N 1000
#define MAX_M 1000
#define MAX_T 1000000

using namespace std;
/*
만나는 그 순간
내 풀이
*/
int a[MAX_T + 1];
int b[MAX_T + 1];


int main()
{
  freopen("input.txt", "rt", stdin);
  int n, m;
  cin >> n >> m;
  char direction;
  int dis;
  int cur = 0;
  int index = 1;
  for (int i = 1; i <= n; i++)
  {
    cin >> direction >> dis;
     while (dis--) {
      if(direction == 'R') {
          a[index++] = ++cur;
      } else {
          a[index++] = --cur;
      }
    }
  }
  cur = 0;
  index = 1;
  for (int i = 1; i <= m; i++)
  {
    cin >> direction >> dis;
    while (dis--) {
      if(direction == 'R') {
          b[index++] = ++cur;
      } else {
          b[index++] = --cur;
      }
    }
  }
  
  int ans = -1;
  for(int i = 1; i <= index; i++)
    if(a[i] != 0 && a[i] == b[i]) {
      ans = i;
      break;
    }
  cout << ans;
  return 0;
}