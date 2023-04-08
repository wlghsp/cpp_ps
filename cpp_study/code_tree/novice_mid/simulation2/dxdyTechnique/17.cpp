#include <iostream>
#define MAX_NM 100
#define DIR_NUM 4
using namespace std;
/*
가운데에서 시작하여 빙빙 돌기
내 풀이
*/

int n;
int answer[MAX_NM][MAX_NM];

// 동, 남, 서, 북
int dx[DIR_NUM] = {0, 1, 0, -1};
int dy[DIR_NUM] = {1, 0, -1, 0};

int dir_num = 2; // 0: 오른쪽, 1: 아래쪽, 2: 왼쪽, 3: 위쪽

bool InRange(int x, int y) {
  return (0 <= x && x < n && 0 <= y && y < n);
}


int main()
{
  freopen("input.txt", "rt", stdin);
  cin >> n;
  int x = n - 1, y = n - 1;
  answer[x][y] = n * n;
  for (int i = n * n - 1; i >= 1; i--)
  {
    int nx = x + dx[dir_num];
    int ny = y + dy[dir_num];

    // 범위를 벗어 났거나 이미 도달하였다면
    if (!InRange(nx, ny) || answer[nx][ny] != 0)
    {
      dir_num = (dir_num + 1) % 4;
    }

    x = x + dx[dir_num];
    y = y + dy[dir_num];
    answer[x][y] = i;
  }
  

  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n; j++)
    {
      cout << answer[i][j] << " ";
    }
    cout << '\n';
  }
  return 0;
}

