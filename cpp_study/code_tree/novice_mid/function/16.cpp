#include <iostream>
#include <string>
using namespace std;

int countOnjunsu(int a, int b){
    int cnt = 0;
    for (int i = a; i <= b; i++)
    {
      if (i % 2 == 0)
      {
        continue;
      } else if (i % 10 == 5) {
        continue;
      } else if (i % 3 == 0 && i % 9 != 0)
      {
        continue;
      } else cnt++;
    }
    
    return cnt;
}



int main()
{ 
  freopen("input.txt", "rt", stdin);
  int a, b;
  cin >> a >> b;
  cout << countOnjunsu(a, b);
  return 0;
}