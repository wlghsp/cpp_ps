#include <iostream>
using namespace std;

int getPowerVal(int a, int b){
    int result = 1;
    for (int i = 0; i < b; i++)
    {
      result *= a;
    }
    return result;
}



int main()
{ 
  freopen("input.txt", "rt", stdin);
  int a, b;
  cin >> a >> b;
  cout << getPowerVal(a, b);
  return 0;
}