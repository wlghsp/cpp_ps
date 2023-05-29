#include <iostream>
#include <algorithm>
#include <climits>
#define MAX_N 100
#define MAX_AB 1000
using namespace std;

/*
운행 되고 있는 시간
내 풀이
*/

int n;
int a[MAX_N], b[MAX_N];

void Input() {
  cin >> n;
  for (int i = 0; i < n; i++)
  {
    cin >> a[i] >> b[i];
  }
}


int Search() {
  int max_time = INT_MIN;
  for(int i = 0; i < n; i++) {
    int time[MAX_AB]= {};
    int sum = 0;
    for (int j = 0; j < n; j++)
    {
      if (i == j) continue;
      for (int k = a[j]; k < b[j]; k++)
      {
        if(time[k] == 0) {
          time[k] = 1;
          sum++;
        }
      }
    }
    max_time = max(max_time, sum);
    
  } 
  return max_time; 
}


int main() {
  freopen("input.txt", "rt", stdin);
  Input();
  cout << Search();
  return 0;
}