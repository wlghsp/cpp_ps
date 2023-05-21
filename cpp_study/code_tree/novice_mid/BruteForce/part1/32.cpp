#include <iostream>
#include <algorithm>
#include <climits>
#define MAX_N 100
using namespace std;

/*
자리마다 숫자 정하기 
*/

int main() {
  int cnt = 0;
  for (int i = 1; i <= 9; i++)
  {
    for (int j = 0; j <= 9; j++)
    {
      for (int k = 0; k <= 9; k++)
      {
        if (i != j && j != k && k != i && (i + j + k) % 2 == 1)
        {
          cnt++;
        }
      }
    }
    
  }
  cout << cnt;  
  return 0;
}