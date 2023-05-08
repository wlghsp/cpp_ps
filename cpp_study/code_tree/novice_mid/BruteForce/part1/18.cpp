#include <iostream>
#define MAX_NM 50
#define DIR_NUM 8

using namespace std;

/*
숨은 단어 찾기 2
내 풀이
*/

int N, M;
char board[MAX_NM][MAX_NM];
string lee = "LEE";

int dx[DIR_NUM] = {1, 1, 1, 0, -1, -1, -1, 0}; 
int dy[DIR_NUM] = {-1, 0, 1, 1, 1, 0, -1, -1}; 

int ans = 0;

void Input() {
  cin >> N >> M;

  for (int i = 0; i < N; i++)
  {
    for (int j = 0; j < M; j++)
    {
      cin >> board[i][j];
    }
  }
}

bool InRange(int x, int y) {
  return (0 <= x && x < N && 0 <= y && y < M);
}

void Search() {

  for (int i = 0; i < N; i++)
  {
    for (int j = 0; j < M; j++)
    {
      if (board[i][j] != 'L') continue;

      for (int k = 0; k < DIR_NUM; k++)
      {
        string word = "L";
        int curx = i;
        int cury = j;

        for (int t = 0; t < 2; t++)
        {
          int nx = curx + dx[k];
          int ny = cury + dy[k];
          if (InRange(nx, ny) == false) break;
          if (board[nx][ny] != 'E') break;
          word += board[nx][ny];
          curx = nx;
          cury = ny;
        }

        if (lee.compare(word) == 0)
        {
          ans++;
        }
      }
      
    }
    
  }
  
}


int main() {
  freopen("input.txt", "rt", stdin);
  Input();
  Search();
  cout << ans;
  return 0;
}