#include <iostream>
#include <climits>
#include <algorithm>
#define MAX_N 100
#define MAX_NUM 1000000

using namespace std;
/*
이상한 폭탄 3
내 풀이
*/

int n, k;
int arr[MAX_N];
int record[MAX_NUM + 1];

void Input() {
  cin >> n >> k;
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }
}

int Search() {
  int ans = 0;
  int max_val = 0;
  for (int i = 0; i < n; i++)
  {
    int num = arr[i];
    for (int j = i + 1; j <= min(i + k, n); j++)
    {
      if(num == arr[j]) {
        record[num]++;
      }
    }
    for (int j = i - 1; j >= max(i - k, 0); j--)
    {
      if(num == arr[j]) {
        record[num]++;
      }
    }
  }

  for (int i = MAX_NUM - 1; i >= 0; i--)
  {
    if(max_val < record[i]) {
      ans = i;
      max_val = record[i];
    }
  }
  
  return ans;
}

int main() {
  freopen("input.txt", "rt", stdin);
  Input();
  cout << Search();
  return 0;
}