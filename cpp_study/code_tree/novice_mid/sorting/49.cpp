#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
/*
문자열 정렬
: 내 풀이
*/


int main()
{
  freopen("input.txt", "rt", stdin);
  string str;
  cin >> str;
  sort(str.begin(), str.end());
  cout << str;
  return 0;
}
