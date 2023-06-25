#include <iostream>
#include <climits>
#include <vector>
#define MAX_NUM 1000
using namespace std;
/*
수를 여러번 사용하여 특정 수 만들기
해설 풀이
*/

int a, b, c;

void Input() {
  cin >> a >> b >> c;
}

int Search() {
  int max_sum = 0;
  for (int i = 0; i  * a <= c; i++)
  {
    int sum = a * i; 

    int num_b = (c - sum) / b;
    sum += num_b * b;
    max_sum = max(max_sum, sum);
  }
  
  return max_sum;
}


int main() {
  freopen("input.txt", "rt", stdin);
  Input();
  cout << Search();
  return 0;
}