#include <iostream>
#include <climits>
#define MAX_N 100
using namespace std;

/*
씨 오 더블유 2
내 풀이
*/

int n;
string a;
int ans = 0;


int main() {
  freopen("input.txt", "rt", stdin);
  cin >> n;
  cin >> a;
  
  for (int i = 0; i < n - 2; i++)
  {
    for (int j = i + 1; j < n - 1; j++)
    {
      for (int k = j + 1; k < n; k++)
      {
        if(a[i] =='C' && a[j] == 'O' && a[k] == 'W') {
          ans++;
        }
      }
    }
  }
  cout << ans;  
  return 0;
}