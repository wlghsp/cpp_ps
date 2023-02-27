#include <iostream>
#include <string>
using namespace std;

string IsMagicNumber(int n) { 
    return (n % 2 == 0 && (n / 10 + (n % 10)) % 5 == 0) ? "Yes" : "No";
}

int main()
{
  freopen("input.txt", "rt", stdin);
  int n;
  cin >> n;
  cout << IsMagicNumber(n);
  return 0;
}