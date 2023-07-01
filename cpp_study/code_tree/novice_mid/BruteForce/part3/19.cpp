#include <iostream>
#include <algorithm>
using namespace std;
/*
답을 일일이 가정해보는 완전탐색
*/

int n = 5;
int arr[5] = {4, 3, 1, 2, 5};

bool IsPossible(int min_val) {
  int available_indices[5] = {};
  int cnt = 0;

  for (int i = 0; i < n; i++)
  {
    if (arr[i] >= min_val)
    {
      available_indices[cnt++] = i;
    }
  }

  for (int i = 1; i < cnt; i++)
  {
    int dist = available_indices[i] - available_indices[i - 1];
    if (dist > 2) return false;
  }

  return true;
}


int main() {
  int maximin = 0;
  for (int a = 0; a < min(arr[0], arr[4]); a++)
  {
    if (IsPossible(a))
    {
      maximin = max(maximin, a);
    }
  }
  
  cout << maximin;
  return 0;
}