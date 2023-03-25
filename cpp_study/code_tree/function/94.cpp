#include <iostream>
#define MAX_N 1000
#define MAX_K 1000000
using namespace std;
/*
흰검 칠하기
해설 풀이
*/

int n;
int a[2 * MAX_K + 1]; // 타일의 색깔 구분(흰색(1) or 검은색(2)) 
int cnt_b[2 * MAX_K + 1]; // 검은색으로 칠한 횟수
int cnt_w[2 * MAX_K + 1]; // 흰색으로 칠한 횟수
int b, w, g;

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
        cnt_w[cur]++;
        if(distance) cur--; // 왼쪽 이동
      }
    }
    else 
    {
      while (distance--)
      {
        a[cur] = 2;
        cnt_b[cur]++;
        if(distance) cur++; // 오른쪽 이동
      }  
    }
  }
  for(int i = 0; i <= 2 * MAX_K; i++) {
    if (cnt_b[i] >= 2 && cnt_w[i] >= 2) g++;
    else if(a[i] == 1) w++;
    else if(a[i] == 2) b++;
  }
  cout << w << " " << b << " " << g;
  return 0;
}