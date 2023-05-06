#include <iostream>
#define MAX_N 100
using namespace std;
/*
최대로 겹치는 지점
내 풀이
*/

int n;
int x1, x2;
int line[MAX_N + 1];

int main() {
  freopen("input.txt", "rt", stdin);
  cin >> n;
  for(int i = 0; i < n; i++){
    cin >> x1 >> x2;
    for(int j = x1; j <= x2; j ++) {
      line[j]++;
    }
  }
  int max = 0;
  for(int i = 0; i <= MAX_N; i++) {
    if(max < line[i]) max = line[i];
  }  
  cout << max;
  return 0; 
}