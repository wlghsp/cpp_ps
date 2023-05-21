#include <iostream>
#include <algorithm>
#include <climits>
#define MAX_N 100
using namespace std;

/*
한 가지로 열리는 자물쇠
내 풀이
*/

int N;
int a, b, c;


void Input() {
  cin >> N;
  cin >> a >> b >> c;
}

int Search() {
  int cnt = 0;
  for (int i = 1; i <= N; i++) 
  {
    for (int j = 1; j <= N; j++)
    {
      for (int k = 1; k <= N; k++)
      {
        if (abs(i - a) <= 2 || abs(j- b) <= 2 || abs(k - c) <= 2) {
          cnt++;
        }
      }
    }
  }
  return cnt;
}


int main() {
  freopen("input.txt", "rt", stdin);
  Input();
  cout << Search();
  return 0;
}