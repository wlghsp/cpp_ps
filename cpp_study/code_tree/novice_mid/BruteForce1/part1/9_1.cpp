#include <iostream>
#include <climits>
using namespace std;

/*
이상한 진수 2
해설 풀이
*/

string a;
int ans = INT_MIN;

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

void findMaxDecimalNum() {
  int size = a.size();
  for(int i = 0; i < size; i++) {
    // i번째 자릿수를 바꿉니다. 
    a[i] = '0' + '1' - a[i];
    // 십진수 변환
    int num = 0;
    for (int i = 0; i < a.size(); i++)
    {
      num = num * 2 + (a[i] - '0');
    }
    
    ans = max(ans, num);
    // i번째 자릿수를 원래대로 돌려놓습니다. 
    a[i] = '0' + '1' - a[i];
  }
}


int main()
{
  freopen("input.txt", "rt", stdin);

  Input();

  findMaxDecimalNum();

  cout << ans;

  return 0;
}