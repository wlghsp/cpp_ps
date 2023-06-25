#include <iostream>
#include <climits>
#include <vector>
#define MAX_N 20
using namespace std;
/*
3개의 선 2
내 풀이
*/

int n;
int x[MAX_N + 1], y[MAX_N + 1];

void Input() {
  cin >> n;
  for (int i = 0; i < n; i++)
  {
    cin >> x[i] >> y[i];
  }
}

int Search() {
  int max_sum = INT_MIN;
  
  
  return max_sum;
}


int main() {
  freopen("input.txt", "rt", stdin);
  Input();
  cout << Search();
  return 0;
}