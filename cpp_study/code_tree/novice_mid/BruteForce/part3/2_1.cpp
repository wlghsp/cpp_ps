#include <iostream>
#include <climits>
#define MAX_N 100
#define MAX_NUM 3
using namespace std;
/*
야바위
해설 풀이
*/

int n;
int a[MAX_N + 1], b[MAX_N + 1], c[MAX_N + 1];
int yabawi[MAX_NUM + 1];

void Input() {
  cin >> n;
  for (int i = 0; i < n; i++)
  {
    cin >> a[i] >> b[i] >> c[i];
  }
}



int Search() {
  int max_score = 0;
  for (int i = 1; i <= 3; i++)
  {
    yabawi[1] = yabawi[2] = yabawi[3] = 0;
    yabawi[i] = 1;
    int score = 0;
    for (int j = 0; j < n; j++)
    {
      swap(yabawi[a[j]], yabawi[b[j]]);
      if(yabawi[c[j]]) score++;    
    }
    max_score = max(score, max_score);   
  }
  
  return max_score;
}


int main() {
  freopen("input.txt", "rt", stdin);
  Input();
  cout << Search();
  return 0;
}