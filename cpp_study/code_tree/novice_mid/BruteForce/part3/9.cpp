#include <iostream>
#include <climits>
#include <string>
#define MAX_N 100
using namespace std;
/*
등장하지 않는 문자열의 길이
내 풀이
*/
int n;
string str;

void Input() {
  cin >> n >> str;
}
int countSubString(const string& subStr) {
  int count = 0;
  size_t pos = 0;
 while ((pos = str.find(subStr, pos + subStr.length())) != string::npos) 
  {
    ++count;
  }
  return count;
  
}

int Search() {
  int min_length = INT_MAX;
  // 길이 i에 대해서 1부터 n까지 확인
  for (int i = 1; i < n; i++)
  {
    bool success = false;
    int length = i;

    for (int j = 0; j < n - length; j++)
    {
      string newStr = str.substr(j, length);
      // 두 번 이상 등장하는 경우
      if (countSubString(newStr) >= 2) 
      {
        success = true; // true로 만들고 break 한다.
        break;
      }
    }
 
    if(!success) { 
      min_length = min(min_length, length);
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