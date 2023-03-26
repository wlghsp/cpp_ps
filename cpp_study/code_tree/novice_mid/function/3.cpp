#include <iostream>

using namespace std;
void PrintLines(int n, int m)
{
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++)
    {
      cout << '1';
    }
    cout << '\n';
  }  
  
}

int main()
{
  freopen("input.txt", "rt", stdin);
  int n, m;
  cin >> n >> m;
  PrintLines(n, m);
  return 0;
}