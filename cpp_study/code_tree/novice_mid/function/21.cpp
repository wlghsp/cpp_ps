#include <iostream>
#include <string>
using namespace std;

/*
두 정수 값 교환하기 : 내 풀이

*/

void swap(int &n, int &m) {
  int tmp = n;
  n = m;
  m = tmp;
}


int main()
{
  freopen("input.txt", "rt", stdin);
  int n, m;
  cin >> n >> m;
  swap(n, m);
  cout << n << " " << m;
  return 0;
}