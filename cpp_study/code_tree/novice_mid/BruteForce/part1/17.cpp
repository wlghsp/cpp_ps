#include <iostream>
#define MAX_N 19
using namespace std;

/*
오목
내 풀이
*/

int n;
int board[MAX_N][MAX_N];
int ans;
int r, c;

void Input() {
  for (int i = 0; i < MAX_N; i++)
  {
    for (int j = 0; j < MAX_N; j++)
    {
      cin >> board[i][j];
    }
  }
}

bool InRange(int x, int y) {
  return (0 <= x && x < MAX_N && 0 <= y && y < MAX_N);
}


bool CheckFiveInARow(int x, int y) {
  int cnt = 0;
  int tmp_x = x - 2;
  for (int i = 0; i < 5; i++)
  {
    if(InRange(x, tmp_x  + i) && board[tmp_x + i][y] == board[x][y]){
      cnt++;
    } else {
      break;
    }
  }
  if(cnt == 5) return true;
  cnt = 0;
  int tmp_y = y - 2;
  for (int i = 0; i < 5; i++)
  {
    if(InRange(x, tmp_y  + i) && board[x][tmp_y + i] == board[x][y]){
      cnt++;
    } else {
      break;
    }
  }
  if(cnt == 5) return true;
  cnt = 0;
  tmp_x = x - 2;
  tmp_y = y - 2;
  for (int i = 0; i < 5; i++)
  {
    if(InRange(tmp_x + i, tmp_y + i) && board[tmp_x + i][tmp_y + i] == board[x][y]){
      cnt++;
    } else {
      break;
    }
  }
  if(cnt == 5) return true;
  tmp_x = x + 2;
  tmp_y = y - 2;
  for (int i = 0; i < 5; i++)
  {
    if(InRange(tmp_x - i, tmp_y + i) && board[tmp_x - i][tmp_y + i] == board[x][y]){
      cnt++;
    } else {
      break;
    }
  }
  if(cnt == 5) return true;
  return false;
}

int Search() {
  int result = 0;
  for (int i = 0; i < MAX_N; i++)
  {
    for (int j = 0; j < MAX_N; j++)
    {
      if(board[i][j] != 0 && CheckFiveInARow(i, j)) {
        result = board[i][j];
        r = i + 1;
        c = j + 1;
        break;
      }
    }
  }
  return result;
}

int main() {
  freopen("input.txt", "rt", stdin);
  Input();
  ans = Search();
  // 승리여부 1: 검, 2: 흰, 0: 무승부 
  cout << ans << '\n';
  if(ans == 1 || ans == 2) {
    cout << r << " " << c;
  }

  return 0;
}