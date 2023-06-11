#include <iostream>
#include <algorithm>
#include <climits>
#define MAX_N 100
#define MAX_BOMB 1000
using namespace std;
/*
이상한 폭탄 2
내 풀이
*/

int K, N;
int arr[MAX_N + 1];
bool exploded[MAX_BOMB + 1];

void Input() {
  cin >> N >> K;
  for (int i = 1; i <= N; i++)
  {
    cin >> arr[i];
  }
}


int Search() {
  int max_num = -1;
  for (int i = 1; i <= N; i++)
  {
    for (int j = i + 1; j <= N; j++)
    {
        if(arr[i] == arr[j] && abs(j - i) <= K) {
          max_num = max(max_num, arr[i]);
        }
    }
  }
  return max_num; 
}


int main() {
  freopen("input.txt", "rt", stdin);
  Input();
  cout << Search();
  return 0;
}