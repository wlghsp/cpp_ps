#include <iostream>
#define DIR_NUM 4
#define MAX_N 100
using namespace std;
/*
격자 위의 편안한 상태
내 풀이
*/

int n, m;

// 시계방향 동, 남, 서, 북 순으로 정의함 
int dx[DIR_NUM] = {1, 0, -1, 0};
int dy[DIR_NUM] = {0, -1, 0, 1};
int a[MAX_N + 1][MAX_N + 1];

bool InRange(int x, int y) {
  return (0 <= x && x < n && 0 <= y && y < n);
}

int MoreThanThreeOne(int x, int y) {
  int cnt = 0;
  for (int i = 0; i < DIR_NUM; i++)
  {
    int nx = x + dx[i];
    int ny = y + dy[i];
    if(InRange(nx, ny) && a[nx][ny] == 1) cnt++;
  }
  return cnt == 3 ? 1 : 0;
}


int main()
{
  freopen("input.txt", "rt", stdin);
  cin >> n >> m;
  for (int i = 0; i < m; i++)
  {
    int r, c;
    cin >> r >> c;
    r--;
    c--;
    a[r][c] = 1;
    cout << MoreThanThreeOne(r, c) << '\n';
  }
  

  return 0;
}

