#include <iostream>
#include <algorithm>
#include <climits>
#define MAX_N 100
using namespace std;

/*
아름다운 수열 2
내 풀이
*/

int N, M;
string a, b;

void Input() {
  cin >> N >> M;
  for (int i = 0; i < N; i++) {
    char c;
    cin >> c;
    a += c;
  }
  for (int i = 0; i < M; i++) {
    char c;
    cin >> c;
    b += c;
  }
}

int Search() {
  // 2번째 배열 정렬
  sort(b.begin(), b.end());
  int cnt = 0;

  for (int i = 0; i < N; i++)
  {
    if(i + M > N) continue; 
    string sub = a.substr(i, M);
    sort(sub.begin(), sub.end());
    if (sub.compare(b) == 0)
    {
      cnt++;
    }
  }
  return cnt;
}


int main() {
  freopen("input.txt", "rt", stdin);
  Input();
  cout << Search();
  return 0;
}