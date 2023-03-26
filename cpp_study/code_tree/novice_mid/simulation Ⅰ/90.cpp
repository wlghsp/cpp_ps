#include <iostream>
using namespace std;
/*
블럭쌓는 명령2
내 풀이
*/

int main() {
  freopen("input.txt", "rt", stdin);
  int n, k;
  cin >> n >> k;
  int cells[n+1];
  for(int i = 1; i <= n; i++) {
    cells[i] = 0;
  }
  for (int i = 1; i <= k; i++)
  {
    int a, b;
    cin >> a >> b;
    for(int j = a; j <= b; j++) {
      cells[j]++;
    }
  }
  int maxVal = cells[1];
  for(int i = 2; i <= n; i++){
    if(maxVal < cells[i]) maxVal = cells[i];
  }
  cout << maxVal;
  return 0; 
}