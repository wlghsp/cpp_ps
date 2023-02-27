#include <iostream>
using namespace std;

void PrintLines(int n)
{
  int num = 1;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++)
    {
      cout << num++ << " ";
      if (num > 9)
      {
        num = 1;
      }
    }
    cout << '\n';
  }  
  
}

int main()
{
  freopen("input.txt", "rt", stdin);
  int n;
  cin >> n;
  PrintLines(n);
  return 0;
}