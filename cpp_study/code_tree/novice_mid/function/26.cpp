#include <iostream>
#include <string>
using namespace std;

/*
2개 이상의 알파벳 : 내 풀이
*/
bool MoreThanTwoAlpabets(string &str) {  
  char alphabets = str[0];
  for (int i = 1; i < str.size(); i++)
  {
    if (alphabets != str[i])
    {
      return true;
    }
  }
  return false;  
}


int main() {
    freopen("input.txt", "rt", stdin);
    string s;
    cin >> s;
    if (MoreThanTwoAlpabets(s))
    {
      cout << "Yes";
    } else {
      cout << "No";
    }
    return 0;
}
