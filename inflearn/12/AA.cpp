#include <stdio.h>

int main()
{
    // freopen("input.txt", "rt", stdin);
    int n, sum =0, c=1, d=9, res = 0;
    scanf("%d", &n);
    
    while (sum+d<n) 
    {
      res = res + (c * d);
      sum = sum + d;
      c++; // c+1 자리 숫자로 
      d=d*10; // d = c자리의 숫자의 갯수 
    }
    res = res + ((n-sum)*c);
    printf("%d", res);


    return 0;
}