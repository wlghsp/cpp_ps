#include <iostream>

using namespace std;
void PrintNLines(int n)
{
  for (int i = 0; i < n; i++)
    cout << "12345^&*()_" << '\n';
}

int main()
{
  freopen("input.txt", "rt", stdin);
  int n;
  cin >> n;
  PrintNLines(n);
  return 0;
}