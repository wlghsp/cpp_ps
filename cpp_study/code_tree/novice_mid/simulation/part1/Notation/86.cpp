#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
/*
10진수로 변환하기
*/


int main() {
  freopen("input.txt", "rt", stdin);
  string binary;
  cin >> binary;
  int num = 0; 
  for (int i = 0; i < binary.length(); i++)
  {
    num = num * 2 + (binary[i] - 48);    
  }
  cout << num;
  return 0; 
}