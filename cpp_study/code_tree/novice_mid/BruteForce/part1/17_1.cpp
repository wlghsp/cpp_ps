#include <iostream>
#define DIR_NUM 8
#define N 19
using namespace std;

/*
오목
해설 풀이
*/

int n;
int arr[N][N];

// 왼쪽아래(1, -1), 아래쪽 (1, 0), 오른쪽 아래(1, 1) 
// 왼쪽 위(-1, -1), 위쪽(-1, 0), 오른쪽 위(-1, 1)
// 왼쪽(0, -1), 오른쪽(0, 1),  
int dx[DIR_NUM] = {1, 1, 1, -1, -1, -1, 0, 0};
int dy[DIR_NUM] = {-1, 0, 1, -1, 0, 1, -1, 1};

bool InRange(int x, int y) {
  return (0 <= x && x < N && 0 <= y && y < N);
}



int main() {
  freopen("input.txt", "rt", stdin);
  for(int i = 0; i < N; i++)
    for(int j = 0; j < N; j++) 
      cin >> arr[i][j];

  // 모든 좌표에서 다 확인해봅니다. 
  for(int i = 0; i < N; i++) {
    // 격자를 벗어나지 않을 범위로만 잡습니다. 
    for(int j = 0; j < N; j++) {

      if(arr[i][j] == 0) continue;

      for(int k = 0; k < DIR_NUM; k++) {
        int curt = 1;
        int curx = i;
        int cury = j;

        while (true)
        {
          int nx = curx + dx[k];
          int ny = cury + dy[k];
          if (InRange(nx, ny) == false) break;
          if(arr[nx][ny] != arr[i][j]) break;
          curt++;
          curx = nx;
          cury = ny;
        }
        if (curt == 5) 
        {
          cout << arr[i][j] << endl;
          cout << i + 2 * dx[k] + 1 << " " << j + 2 * dy[k] + 1;
          return 0;
        }
      } 
    }
  }
  cout << 0;
  return 0;
}