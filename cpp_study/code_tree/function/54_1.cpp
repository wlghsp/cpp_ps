#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
/*
순서를 바꾸었을 때 같은 단어인지 판별하기
: 해설 풀이 1
*/
string a, b;

int main()
{
  freopen("input.txt", "rt", stdin);
  cin >> a >> b;
  sort(a.begin(), a.end());
  sort(b.begin(), b.end());
  if (a.compare(b)== 0)
  {
    cout << "Yes";
  } else {
    cout << "No";
  }
  return 0;
}
