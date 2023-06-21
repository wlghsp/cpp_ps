#include <iostream>
#include <climits>
#include <vector>
#define MAX_N 100
using namespace std;
/*
숫자 2배 후 하나 제거하기
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
  int min_diff = INT_MAX;
  for (int i = 0; i < n; i++)
  {
    // i 인덱스의 숫자를 2배로 함 
    arr[i] *= 2;
    for (int j = 0; j < n; j++)
    {
      // j 인덱스의 숫자를 제외
      vector<int> remaining_arr;
      for (int k = 0; k < n; k++)
      {
        if(k != j) { 
          remaining_arr.push_back(arr[k]);
        }
      }
      int sum_diff = 0;
      for (int k = 0; k < n - 2; k++)
      {
        sum_diff += abs(remaining_arr[k+1] - remaining_arr[k]);
      }
      min_diff = min(sum_diff, min_diff);
    }
    arr[i] /= 2;
  }
  return min_diff;
}


int main() {
  freopen("input.txt", "rt", stdin);
  Input();
  cout << Search();
  return 0;
}