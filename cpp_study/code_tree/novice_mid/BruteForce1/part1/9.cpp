#include <iostream>
#include <climits>
using namespace std;

/*
이상한 진수 2
내 풀이
*/

string a;
int ans;

void Input()
{
  cin >> a;
}

int convert(string a) {
  int num = 0;
  for(int i = 0; i < a.size(); i++) {
    num = num * 2 + (a[i] - '0');
  }
  return num;
}

int findMaxDecimalNum() {
  int max_num = 0;
  int size = a.size();
  for(int i = 0; i < size; i++) {
    string tmp = a.substr(0, i) + (a[i] == '0' ? '1' : '0') + a.substr(i + 1);
    int result = convert(tmp);
    max_num = max(max_num, result);
  }
  return max_num;
}


int main()
{
  freopen("input.txt", "rt", stdin);

  Input();

  ans = findMaxDecimalNum();

  cout << ans;

  return 0;
}