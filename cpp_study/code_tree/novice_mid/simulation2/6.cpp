#include <iostream>
#define MAX_N 100
#define MAX_K 10000
using namespace std;
/*
벌금은 누구에게
내 풀이
*/

int n, k, m;
int students[MAX_N + 1];
int main()
{
  freopen("input.txt", "rt", stdin);
  cin >> n >> m >> k;
  bool found = false;
  int ans = -1;
  for(int i = 0; i < m; i++) {
    int tmp;
    cin >> tmp;
    students[tmp]++;
    if(!found && students[tmp] >= k) {
      found = true;
      ans = tmp;
    }
  }
  cout << ans;

  return 0;
}