#include <iostream>
using namespace std;

bool isThree(int t) {
  return t == 3 || t == 6 || t == 9;
}

bool isMagicNumber(int n) {
  if (n % 3 == 0) return true;
  while (n != 0)
  {
    int tmp = n % 10;
    if(isThree(tmp)){
      return true;
    }
    n /= 10;
  }
  return false; 
}


int countNums(int a, int b) { 
    int cnt = 0;
    for (int i = a; i <= b; i++)
    {
      if(isMagicNumber(i)){
        cnt++;
      }
    }
    return cnt;
}

int main()
{
  freopen("input.txt", "rt", stdin);
  int a, b;
  cin >> a >> b;
  cout << countNums(a, b);
  return 0;
}