#include <iostream>
#include <algorithm>
using namespace std;
/*
결정하기 애매한 숫자가 있는 경우
*/


int main() {
  for(int a = 1; a <= 9; a++)
    for(int b = 1; b <= 9; b++)
      for(int c = 1; c <= 9; c++) {
          if(abs(a - 5) != 4 || abs(b - 2) != 4 || abs(c - 3) != 2) 
            continue;
          if(abs(a - 2) != 1 || abs(b - 7) != 1 || abs(c - 6) != 1) 
            continue;
          
          cout << a << " " << b << " " << c;
        }
  return 0;
}