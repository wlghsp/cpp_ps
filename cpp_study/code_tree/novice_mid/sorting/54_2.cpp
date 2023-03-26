#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
/*
순서를 바꾸었을 때 같은 단어인지 판별하기
: 해설 풀이 2
*/
string a, b;

bool Check(int alpha[]) {
  for(int i = 0; i < 26; i++) {
    if(alpha[i] != 0){
      return false;
    }
  }

  return true;
}

int main()
{
  freopen("input.txt", "rt", stdin);
  cin >> a >> b;
  int alpha[26];
  for(int i =0; i < 26; i++) alpha[i] = 0;
  for(int i = 0; i < a.size(); i++){
    alpha[a[i] - 'a']++;
  }
  for(int i = 0; i < b.size(); i++){
    alpha[b[i] - 'a']--;
  }
  if(Check(alpha)) {
    cout << "Yes";
  } else {
    cout << "No";
  }
  return 0;
}
