#include <iostream>
#define MAX_N 100
using namespace std;

/*
괄호 쌍 만들어주기 3
내 풀이
*/
string a;



int main() {
  freopen("input.txt", "rt", stdin);
  cin >> a;
  int size = a.size();
  int ans = 0;
  for(int i = 0; i < size; i++) {
      for(int j = i + 1; j < size; j++){
        if(a[i] == '(' && a[j] == ')') {
          ans++;
        }
      }
  }
  cout << ans;
  return 0;
}