#include <iostream>
#include <climits>
#include <string>
#define MAX_N 100
#define MAX_M 10000
using namespace std;
/*
원소 값들의 최대 합
내 풀이
*/

int n, m;
int arr[MAX_N + 1];
void Input() {
  cin >> n >> m;
  for (int i = 1; i <= n; i++)
  {
    cin >> arr[i];
  }
}

int GetElementSum(int start) {
  int sum = 0;
  int cnt = 0;
  int loc = start;
  while(cnt < m) {
    int nextElement = arr[loc];
    sum += nextElement;
    loc = nextElement;
    cnt++;
  }
  return sum;
}



int Search() {
  int max_sum = INT_MIN;
  for (int i = 1; i <= n; i++)
  {
    int sum = GetElementSum(i);
    max_sum = max(sum, max_sum);
  }
  return max_sum;
}


int main() {
  freopen("input.txt", "rt", stdin);
  Input();
  cout << Search();
  return 0;
}