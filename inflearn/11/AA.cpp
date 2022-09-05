#include <stdio.h>

int main()
{
    freopen("input.txt", "rt", stdin);
    int n, i, tmp, cnt = 0;
    scanf("%d", &n);
    for(i = 1; i <= n; i++) {
       tmp = i;
       while (tmp > 0)
       {
         tmp = tmp/10;
         cnt++;
       }
    }

    printf("%d", cnt);

    return 0;
}