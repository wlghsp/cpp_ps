#include <iostream>
#define MAX_N 100
using namespace std;

/*
괄호 쌍 만들어주기 2
내 풀이
*/
string a;


int main() {
  freopen("input.txt", "rt", stdin);
  cin >> a;
  int size = a.size();
  int ans = 0;
  for(int i = 0; i < size - 1; i++) {
      for(int j = i + 1; j < size - 1; j++){
        if(a[i] == '(' && a[i+1] == '(' && a[j] == ')' && a[j + 1] == ')') {
          ans++;
        }
      }
  }
  cout << ans;
  return 0;
}