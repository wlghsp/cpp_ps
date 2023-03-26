#include <iostream>
#include <string>
using namespace std;

/*
함수를 이용한 부분 문자열의 위치 구하기 : 내 풀이
*/
string text, pattern;

bool IsSubStr(int start_idx) {
  int n = text.size();
  int m = pattern.size();

  if (start_idx + m - 1 >= n)
  {
    return false;
  }
  

  for (int j = 0; j < m; j++)
  {
    if (text[start_idx + j] != pattern[j])
    {
      return false;
    }
  }
  return true;
}



int FindIndex()
{
  int n = text.size();
  for (int i = 0; i < n; i++)
  {
    if(IsSubStr(i)) {
      return i;
    }
  }
  return -1;
}

int main() {
    freopen("input.txt", "rt", stdin);
    cin >> text >> pattern;
    cout << FindIndex();
    return 0;
}
