#include <iostream>
#define DIR_NUM 4
using namespace std;
/*
되돌아오기
해설 풀이
*/

int n, x, y;
// 동, 서, 남, 북 순으로 dx, dy를 정의합니다.
int dx[DIR_NUM] = {1, -1, 0, 0};
int dy[DIR_NUM] = {0, 0, -1, 1};

// 답을 저장합니다. 
int ans = -1;

// 지금까지 걸린 시간을 기록합니다. 
int elapsed_time;

// dir 방향으로 dist 만큼 이동하는 함수입니다. 
// 만약 시작지에 도달하면 true를 반환합니다. 
bool Move(int dir, int dist) {
  while (dist--)
  {
    x += dx[dir];
    y += dy[dir];

    // 이동한 시간을 기록합니다. 
    elapsed_time++;

    // 시작지로 다시 돌아오면
    // 답을 갱신해줍니다. 
    if (x== 0 && y == 0)
    {
      ans = elapsed_time;
      return true;
    }
  }
  return false;
}

int main()
{
  freopen("input.txt", "rt", stdin);
  cin >> n;

  for (int i = 0; i < n; i++)
  {
    char c_dir;
    int dist;
    cin >> c_dir >> dist;

    // 각 방향에 맞는 번호를 붙여줍니다. 
    int dir;
    if(c_dir == 'E')
      dir = 0;
    else if (c_dir == 'W')
      dir = 1;
    else if (c_dir == 'S')
      dir = 2;
    else
      dir = 3;
    
    // 주어진 방향대로 dist 만큼 위치를 이동해봅니다. 
    bool done = Move(dir, dist);
    
    // 시작 위치에 도달했다면, 종료합니다. 
    if(done) 
      break;
  }

  cout << ans;
  return 0;
}

