#include <iostream>
#include <algorithm>
#include <climits>
#define MAX_N 10
#define MAX_AB 101
using namespace std;
/*
선분 3개 지우기
내 풀이
*/

int N;
int arr[MAX_N][2];

void Input() {
  cin >> N;
  for (int i = 0; i < N; i++)
  {
    int a, b;
    cin >> a >> b;
    arr[i][0] = a;
    arr[i][1] = b;
  }
}

bool NotOverlapped(int i1, int i2, int i3) {
  int counting[MAX_AB] = {};
  
  for (int i = 0; i < N; i++)
  {
    if(i == i1 || i == i2 || i == i3) continue;
    
    int x1 = arr[i][0], x2 = arr[i][1];
    for (int j = x1; j <= x2; j++)
    {
      counting[j]++;
    }
  }

  for (int j = 0; j < MAX_AB; j++)
  {
    if(counting[j] > 1) return false;
  }
  return true;
}


int Search() {
  int cnt = 0;
  for (int i = 0; i < N; i++)
  {
    for (int j = i + 1; j < N; j++)
    {
      for (int k = j + 1; k < N; k++)
      {
        if(NotOverlapped(i, j, k)) {
          cnt++;
        }
      }
    }
  }
  return cnt; 
}


int main() {
  freopen("input.txt", "rt", stdin);
  Input();
  cout << Search();
  return 0;
}