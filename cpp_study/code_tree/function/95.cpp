#include <iostream>
#define MAX_N 1000
#define MAX_K 1000000
using namespace std;
/*
신기한 타일 뒤집기
내 풀이
*/

int n;
int a[2 * MAX_K + 1]; // 타일의 색깔 구분(흰색(1) or 검은색(2)) 
int b, w;

int main()
{
  freopen("input.txt", "rt", stdin);
  cin >> n;
  int cur = MAX_K;
  for (int i = 0; i < n; i++) {
    int distance;
    char direction;
    cin >> distance >> direction;
    if (direction == 'L')
    {
      while (distance--)
      {
        a[cur] = 1;
        if(distance) cur--; // 왼쪽 이동
      }
    }
    else 
    {
      while (distance--)
      {
        a[cur] = 2;
        if(distance) cur++; // 오른쪽 이동
      }  
    }
  }
  for(int i = 0; i <= 2 * MAX_K; i++) {
    if(a[i] == 1) w++;
    else if(a[i] == 2) b++;
  }
  cout << w << " " << b;
  return 0;
}