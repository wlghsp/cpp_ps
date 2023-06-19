#include <iostream>
#include <climits>
#define MAX_N 100
#define MAX_H 1000
using namespace std;
/*
빙산의 일각 2
내 풀이
*/

int n;
int arr[MAX_N + 1];

void Input() {
  cin >> n;
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }
}

int Search() {
  int max_cnt = 0;
  for (int k = 0; k < MAX_H; k++)
  { 
    int cnt = 0;
    bool glacier = false;
    for (int i = 0; i < n; i++)
    { 
      
        if(arr[i] > k)  {
          if (!glacier) {
            cnt++;
            glacier = true;
          }
        } else {
          glacier = false;
        }
    }
    max_cnt = max(cnt, max_cnt);
  }
  
  return max_cnt;
}


int main() {
  freopen("input.txt", "rt", stdin);
  Input();
  cout << Search();
  return 0;
}