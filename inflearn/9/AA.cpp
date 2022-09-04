#include <stdio.h>

int cnt[50001];
int main()
{
    //freopen("input.txt", "rt", stdin);
    int n, i, j;
    scanf("%d", &n); // &주소연산자 앰퍼샌드

    for(i=1;i<=n; i++){
        for(j=i; j <=n; j=j+i){
            cnt[j]++;
        }
        printf("%d ", cnt[i]);
    }
    return 0;
}