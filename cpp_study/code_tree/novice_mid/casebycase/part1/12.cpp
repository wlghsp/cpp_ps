#include <iostream>
#include <algorithm>
#define MAX_N 100
using namespace std;
/*
개발자의 가위바위보

*/
int n;
int a[MAX_N], b[MAX_N];

void Input()
{
  cin >> n;
  for(int i = 0; i < n; i++)
    cin >> a[i] >> b[i];
}

int main()
{
  freopen("input.txt", "rt", stdin);
  Input();
  int max_win = 0;

  // Case 1. 1이 2를 이기고, 2가 3을 이기고 3이 1을 이기는 경우
  int win = 0;
  for(int i = 0; i < n; i++) {
    if (a[i] == 1 && b[i] == 2) {
      win++;
    } else if (a[i] == 2 && b[i] == 3) {
      win++;
    } else if (a[i] == 3 && b[i] == 1) {
      win++;
    }
  }

  max_win = max(max_win, win);

  // Case 2. 1이 3을 이기고, 3이 2를 이기고 2가 1을 이기는 경우 
  win = 0;
  for(int i = 0; i < n; i++) {
    if (a[i] == 1 && b[i] == 3) {
      win++;
    } else if (a[i] == 3 && b[i] == 2) {
      win++;
    } else if (a[i] == 2 && b[i] == 1) {
      win++;
    }
  }

  max_win = max(max_win, win);

  cout << max_win;
  
  return 0;
}