#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
/*
2진수를 10진수로 변환하기
*/


int main() {
  int binary[5] = {1, 1, 1, 0, 1};
  int num = 0;

  for(int i = 0; i < 5; i++) {
    num = num * 2 + binary[i];
  }
  cout << num;
  return 0; 
}