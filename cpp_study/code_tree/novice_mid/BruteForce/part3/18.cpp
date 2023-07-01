#include <iostream>
#include <climits>
#define MAX_N 1000
#define MAX_K 10000
using namespace std;
/*
숫자들의 최대 차
내 풀이
*/

int n, k;
int max_val= INT_MIN;
int arr[MAX_N];

void Input() {
  cin >> n >> k;
  for (int a = 0; a < n; a++)
  {
    cin >> arr[a];
    max_val = max(max_val, arr[a]);
  }
}


int Search() {
  int max_cnt = 0;
  for (int a = 1; a < max_val; a++)
  {
    int cnt = 0;
    for (int j = 0; j < n; j++)
    {
      if (a <= arr[j] && arr[j] <= a + k)
      {
        cnt++;       
      } 
    }
    max_cnt = max(max_cnt, cnt);
  }
  
  return max_cnt;
}


int main() {
  freopen("input.txt", "rt", stdin);
  Input();
  cout << Search();
  return 0;
}