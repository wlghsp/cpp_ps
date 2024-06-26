#include <iostream>
#include <climits>
#include <vector>
#define MAX_NUM 1000
using namespace std;
/*
수를 여러번 사용하여 특정 수 만들기
내 풀이
*/

int a, b, c;

void Input() {
  cin >> a >> b >> c;
}

int Search() {
  int max_sum = INT_MIN;
  for (int i = 0; i < c / a + 1; i++)
  {
    for (int j = 0; j < c / b + 1; j++)
    {
      int sum = a * i + b * j; 
      if(sum <= c) max_sum = max(sum, max_sum);
    }
  }
  
  return max_sum;
}


int main() {
  freopen("input.txt", "rt", stdin);
  Input();
  cout << Search();
  return 0;
}