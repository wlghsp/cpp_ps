#include <iostream>
using namespace std;

int getMinVal(int a, int b, int c) { 
    int result = 0;
    result = a > b ? b : a;
    result = result > c ? c : result;
    return result;
}

int Min(int a, int b, int c) {
  int min_val = a;
  if (min_val > b) {
    min_val = b;
  }
  if(min_val > c) {
    min_val = c;
  }
  return min_val;
}


int main()
{
  freopen("input.txt", "rt", stdin);
  int a, b, c;
  cin >> a >> b >> c;
  int minVal = Min(a, b, c);
  cout << minVal;
  return 0;
}