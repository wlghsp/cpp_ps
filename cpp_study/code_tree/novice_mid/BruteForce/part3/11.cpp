#include <iostream>
#include <algorithm>
using namespace std;
/*
머리 아픈 문제를 풀어내는 가장 좋은 방법
*/

int pair_sums[3] = {9, 5, 10};
int my_array[3];

bool IsEqualArray() {
  sort(pair_sums, pair_sums + 3);
  sort(my_array, my_array + 3);
  for (int i = 0; i < 3; i++)
  {
    if (pair_sums[i] != my_array[i])
    {
      return false;
    }
  }
}



int main() {
  for(int a = 1; a <= 10; a++)
    for(int b = a; b <= 10; b++)
      for(int c = b; c <= 10; c++) {
        my_array[0] = a + b;
        my_array[1] = b + c;
        my_array[2] = c + a;
        if(IsEqualArray())
          cout << a << " " << b << " " << c;
      }
  return 0;
}