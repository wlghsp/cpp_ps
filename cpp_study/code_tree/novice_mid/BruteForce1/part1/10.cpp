#include <iostream>
#include <vector>
#include <utility>
#define MAX_RC 15
using namespace std;

/*
체크판위에서 2
해설 풀이
*/

int r, c;
char board[MAX_RC][MAX_RC];
int ans;
int x = 0, y = 0;
vector<pair<int, int>> pick;

void Input()
{
  cin >> r >> c;
  for (int i = 0; i < r; i++)
  {
    for (int j = 0; j < c; j++)
    {
      cin >> board[i][j];
    }
  }
}

int Search() {
  int cnt = 0;
  // 이동 시에 행과 열이 전부 증가하도록
  // 모든 쌍을 다 잡아봅니다.
  for (int i = 1; i < r; i++)
  {
    for (int j = 1; j < c; j++)
    {
      for (int k = i + 1; k < r - 1; k++)
      {
        for (int l = j + 1; l < c - 1; l++)
        {
          // 색깔이 전부 달라지는 경우에만 갯수를 더해줍니다. 
          if(board[0][0] != board[i][j] && board[i][j] != board[k][l] &&
             board[k][l] != board[r - 1][c - 1]) cnt++;
        }
      }
    }
  }
  return cnt;
}

int main()
{
  freopen("input.txt", "rt", stdin);

  Input();

  ans = Search();

  cout << ans;

  return 0;
}