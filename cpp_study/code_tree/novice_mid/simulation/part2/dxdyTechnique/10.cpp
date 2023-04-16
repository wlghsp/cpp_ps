#include <iostream>
#define MAX_NM 100
#define DIR_NUM 4
using namespace std;
/*
빙빙 돌며 숫자 사각형 채우기
내 풀이
*/

int n, m;
int answer[MAX_NM][MAX_NM] = {};

bool InRange(int x, int y) {
  return (0 <= x && x < n && 0 <= y && y < m);
}


int dx[DIR_NUM] = {0, 1, 0, -1};
int dy[DIR_NUM] = {1, 0, -1, 0};
int x = 0, y = 0;  // 시작은 (0, 0) 입니다. 
int dir_num = 0; // 0: 오른쪽, 1: 아래쪽, 2: 왼쪽, 3: 위쪽


int main()
{
  freopen("input.txt", "rt", stdin);
  cin >> n >> m;
  answer[0][0] = 1;
  // n * m 번 진행합니다. 
  for (int i = 2; i <= n * m; i++)
  {
    // 현재 방향 dir를 기준으로 그 다음 위치 값을 계산합니다. 
    int nx = x + dx[dir_num];
    int ny = y + dy[dir_num];

    // 더 이상 나아갈 수 없다면
    // 시계방향으로 90도를 회전합니다. 
    if (!InRange(nx, ny) || answer[nx][ny] != 0)
      dir_num = (dir_num + 1) % 4;
    
    // 그 다음 위치로 이동한 다음 배열에 올바른 값을 채워넣습니다. 
    x = x + dx[dir_num];
    y = y + dy[dir_num];
    answer[x][y] = i;
  }

  // 출력:
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < m; j++)
    {
      cout << answer[i][j] << " ";
    }
    cout << endl;
  }
  
  
  return 0;
}

