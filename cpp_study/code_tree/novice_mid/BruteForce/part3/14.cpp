#include <iostream>
#include <climits>
#include <string>
#define MAX_N 10
#define MAX_NUM 10000
using namespace std;
/*
가장 작은 x 찾기
내 풀이
*/

int n;
int a[MAX_N + 1], b[MAX_N + 1];
void Input() {
  cin >> n;
  for (int i = 0; i < n; i++)
  {
    cin >> a[i] >> b[i];
  }
}


int Search() {
  int min_val = MAX_NUM;
  for (int i = 1; i <= MAX_NUM; i++)
  {
    bool pass = true;
    int x = i;
    for (int j = 0; j < n; j++)
    {
      x *= 2;
      if (x < a[j] || x > b[j]) pass = false;
    }
    if (pass) {
      min_val = min(min_val, i);
    }
  }
  return min_val;
}


int main() {
  freopen("input.txt", "rt", stdin);
  Input();
  cout << Search();
  return 0;
}