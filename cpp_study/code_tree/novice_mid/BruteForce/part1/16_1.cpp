#include <iostream>
#include <climits>
#include <string>
#define MAX_N 20
using namespace std;

/*
Carry 피하기 2
해설 풀이
*/

int n;
int arr[MAX_N];
int ans;
bool found = false;

void Input() {
  cin >> n;
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }
}

int Search() {
  int max_val = -1;
  for (int i = 0; i < n - 2; i++)
  {
    for (int j = i + 1; j < n - 1; j++)
    {
      for (int k = j + 1; k < n; k++)
      {
        bool carry = false;
        
        // 일의 자리에서 carry가 발생하는 경우
        if (arr[i] % 10 + arr[j] % 10 + arr[k] % 10 >= 10)
        {
          carry = true;
        }

        // 십의 자리에서 carry가 발생하는 경우
        if (arr[i] % 100 / 10 + arr[j] % 100 / 10 + arr[k] % 100 / 10 >= 10)
        {
          carry = true;
        }

        // 백의 자리에서 carry가 발생하는 경우
        if (arr[i] % 1000 / 100 + arr[j] % 1000 / 100 + arr[k] % 1000 / 100 >= 10)
        {
          carry = true;
        }

        // 천의 자리에서 carry가 발생하는 경우
        if (arr[i] % 10000 / 1000 + arr[j] % 10000 / 1000 + arr[k] % 10000 / 1000 >= 10)
        {
          carry = true;
        }

        if (!carry)
        {
         max_val = max(max_val, arr[i] + arr[j] + arr[k]);
        }
      }
    }
  }

  return max_val; 
}


int main() {
  freopen("input.txt", "rt", stdin);
  Input();
  ans = Search();
  cout << ans;  
  return 0;
}