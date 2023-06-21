#include <iostream>
#include <climits>
#define MAX_N 100
using namespace std;
/*
야바위
내 풀이
*/

int n;
int a[MAX_N + 1], b[MAX_N + 1], c[MAX_N + 1];

void Input() {
  cin >> n;
  for (int i = 0; i < n; i++)
  {
    cin >> a[i] >> b[i] >> c[i];
  }
}


void mySwap(int *arr, int x, int y) {
  int temp = arr[x];
  arr[x] = arr[y];
  arr[y] = temp;
}

int Search() {
  int max_score = 0;
  for (int i = 1; i <= 3; i++)
  {
    int zoyakdol = i;
    int cups[4] = {0, 1, 2, 3};
    int score = 0;
    for (int j = 0; j < n; j++)
    {
       mySwap(cups, a[j], b[j]);
      if(cups[c[j]] == zoyakdol) score++;    
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