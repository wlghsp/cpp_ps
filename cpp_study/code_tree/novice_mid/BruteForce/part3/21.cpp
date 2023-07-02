#include <iostream>
#include <algorithm>
#define N 15
#define MAX_NUM 40
using namespace std;
/*
A, B, C, D 찾기 2
해설 풀이
*/

int n, k;
int arr[N];

void Input() {
  for (int a = 0; a < N; a++)
  {
    cin >> arr[a];
  }
}

int main() {
  freopen("input.txt", "rt", stdin);
  Input();
  for (int a = 1; a <= MAX_NUM; a++)
  {
    for (int b = a; b <= MAX_NUM; b++)
    {
      for (int c = b; c <= MAX_NUM; c++)
      {
        for (int d = c; d <= MAX_NUM; d++)
        {
          int arr2[N] = {a, b, c, d, a + b, b + c, c + d, d + a, a + c, b + d, a + b + c, a + b + d,
          a + c + d, b + c + d, a + b + c + d};
          sort(arr, arr + N);
          sort(arr2, arr2 + N);
          bool isSame = true;

          for (int i = 0; i < N; i++)
          {
            if(arr[i] != arr2[i]) isSame = false;
          }
          
          if(isSame) {
            cout << a << " " << b << " " << c << " " << d;
          }
        }
      }
    }
  }
  
  return 0;
}