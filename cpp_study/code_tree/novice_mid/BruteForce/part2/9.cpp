#include <iostream>
#include <algorithm>
#include <climits>
#define MAX_N 100
using namespace std;

/*
삼각형 만들기
내 풀이
*/

int n;
int x[MAX_N], y[MAX_N];

void Input() {
  cin >> n;
  for (int i = 0; i < n; i++)
  {
    cin >> x[i] >> y[i];
  }
}


int GetSize(int i, int j, int k) {

  // x축, y축 평행여부 확인 
  bool xt = false;
  bool yt = false; 
   // x값이 같은 쌍이 있으며, y값 역시 같은 쌍이 있는 경우에만
  if(x[i] == x[j] || x[j] == x[k] || x[k] == x[i]) xt = true;
  if(y[i] == y[j] || y[j] == y[k] || y[k] == y[i]) yt = true;

  // 둘다 평행하다면 
  if (xt && yt) 
  {
    return abs((x[i] * y[j] + x[j] * y[k] + x[k] * y[i]) 
      - (x[j] * y[i] + x[k] * y[j] + x[i] * y[k]));  
  }
  
  return 0;
}

int Search() {
  int max_size = INT_MIN;
  for(int i = 0; i < n; i++) {
    for(int j = i + 1;  j < n; j++) {
     for (int k = j + 1; k < n; k++)
     {
      int size = GetSize(i, j, k);
      max_size = max(max_size, size);
     }
     
    }
  }
   
  return max_size; 
}


int main() {
  freopen("input.txt", "rt", stdin);
  Input();
  cout << Search();
  return 0;
}