#include <iostream>
using namespace std;

void draw(int n) {  
    for (int i=1; i<=n; i++) {    
        for (int j=1; j<=n; j++)      
            if (i==1 || i==n || j==1 || j == n - i + 1 || j == i || j == n) 
              printf ("*"); 
            else 
              printf (" ");    
        printf ("\n");  
    }
}


int main()
{
  freopen("input.txt", "rt", stdin);
  int n;
  cin >> n;
  draw(n);
  return 0;
}