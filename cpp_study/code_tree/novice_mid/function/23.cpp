#include <iostream>
#include <string>
using namespace std;

/*
palindrome 여부 판단하기 : 내 풀이

*/

bool isPalindrome(string &str) {
  for(int i = 0; i < str.size(); i++) {
    if (str[i] != str[str.size() - i - 1])
    {
      return false;
    }
    
  }
  return true;
}


int main()
{
  freopen("input.txt", "rt", stdin);
  string s;
  cin >> s;
  if (isPalindrome(s))
  {
    cout << "Yes";
  } else {
    cout << "No";
  }
  return 0;
}