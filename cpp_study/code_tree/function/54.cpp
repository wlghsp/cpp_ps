#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
/*
순서를 바꾸었을 때 같은 단어인지 판별하기
: 내 풀이
*/
string a, b;
bool Equal() {
  if (a.length() != b.length()) return false;
  for(int i = 0; i < a.length(); i++) {
    if(a[i] != b[i]) return false;
  }
  return true;
}



int main()
{
  freopen("input.txt", "rt", stdin);
  cin >> a >> b;
  sort(a.begin(), a.end());
  sort(b.begin(), b.end());
  if (Equal())
  {
    cout << "Yes";
  } else {
    cout << "No";
  }
  return 0;
}
