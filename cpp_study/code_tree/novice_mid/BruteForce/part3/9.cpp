#include <iostream>
#include <climits>
#include <string>
#define MAX_N 100
using namespace std;
/*
등장하지 않는 문자열의 길이
해설 풀이
*/
int n;
string str;

void Input() {
  cin >> n >> str;
}

int Search() {
  int min_length = 1;
  // 길이 i에 대해서 1부터 n까지 확인
  for (int i = 1; i < n; i++)
  {
    bool twice = false;

    for (int j = 0; j <= n - i; j++)
    {
      for (int k = j + 1; k <= n - i; k++)
      {
        // isSame: j부터 i길이의 부분 문자열과
        // k부터 i 길이의 부분 문자열이 완전히 같으면 true
        bool isSame = true;
        for (int l = 0; l < i; l++)
        {
          if (str[j + l] != str[k + l])
          {
            isSame = false;
          }
        }
        if(isSame) twice = true;
      }
    }
 
    if(twice) { 
      min_length = i + 1;
    } else {
      break;
    }
  }
  return min_length;
}


int main() {
  freopen("input.txt", "rt", stdin);
  Input();
  cout << Search();
  return 0;
}