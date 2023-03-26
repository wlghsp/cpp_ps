#include <iostream>
#include <string>
using namespace std;

/*
함수를 이용한 부분 문자열의 위치 구하기 : 내 풀이
*/
string s1, s2;
int n1, n2;

bool isSame(int n) {
  for (int i = 0; i < n2; i++)
  {
    if (s1[i+n] != s2[i])
    {
      return false;
    }
  }
  return true;
}



int getIndex()
{
  int result = -1;
  for (int i = 0; i <= n1 - n2; i++)
  {
    if (isSame(i))
    {
      result = i;
      break;
    }
  }
  return result;
}

int main() {
    freopen("input.txt", "rt", stdin);
    cin >> s1 >> s2;
    n1 = s1.size();
    n2 = s2.size();
    cout << getIndex();
    return 0;
}
