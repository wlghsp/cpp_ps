#include <iostream>
#define MAX_N 20
#define DIR_NUM 8

using namespace std;

/*
최고의 13위치 2
내 풀이
*/

int N;
int board[MAX_N][MAX_N];


void Input() {
  cin >> N;

  for (int i = 0; i < N; i++)
  {
    for (int j = 0; j < N; j++)
    {
      cin >> board[i][j];
    }
  }
}

bool InRange(int x, int y) {
  return (0 <= x && x < N && 0 <= y && y < N);
}

int Search() {
  int max_cnt = 0;
  for (int i = 0; i < N; i++)
  {
    for (int j = 0; j < N - 2; j++)
    {
      for (int k = 0; k < N; k++)
      {
        for (int l = 0; l < N - 2; l++)
        {
          if (i == k && abs(j - l) <= 2) continue;

          int cnt1 = board[i][j] + board[i][j + 1] + board[i][j + 2];
          int cnt2 = board[k][l] + board[k][l + 1] + board[k][l + 2];
          max_cnt = max(max_cnt, cnt1 + cnt2);
        }
      }
      
    }
  }
  return max_cnt;
}


int main() {
  freopen("input.txt", "rt", stdin);
  Input();
  cout << Search();
  return 0;
}