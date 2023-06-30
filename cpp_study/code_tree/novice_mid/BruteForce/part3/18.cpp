#include <iostream>
#include <climits>
#define MAX_N 1000
#define MAX_K 10000
using namespace std;
/*
숫자들의 최대 차
내 풀이

원소의 개수 N과 최대로 차이날 수 있는 값 K가 주어집니다. 
숫자들을 적절하게 뽑아 최댓값과 최솟값과의 차가 K 이하가 되도록 할 때, 
뽑을 수 있는 최대 숫자의 개수를 구하는 프로그램을 작성해보세요.
*/

int n, m;
int arr[MAX_N];

void Input() {
  cin >> n >> m;
  for (int i = 0; i < m; i++)
  {
    cin >> arr[i];
  }
}


int Search() {
  int max_cnt = 0;
  return max_cnt;
}


int main() {
  freopen("input.txt", "rt", stdin);
  Input();
  cout << Search();
  return 0;
}