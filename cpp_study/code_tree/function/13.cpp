#include <iostream>
#include <string>
using namespace std;

int f(int n){
    int a[15] = {1, 1, 2, 3, 2, 1, 4, 1, 1, 1, 2, 4, 2, 3, 4};
    int idx = 0;
    while(n < 15){ 
        n += a[n];
        idx++; 
    }
    return idx;
}



int main()
{ int cnt = 0;
  for (int i = 1; i < 300; i++)
  {
    if(f(i) == 5) {
      cnt++;
    }
  }
  cout << cnt;
  return 0;
}