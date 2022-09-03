#include <stdio.h>

using namespace std;

int main()
{
    freopen("input.txt", "rt", stdin);
    char a[50];
    int res = 0, cnt = 0, i;
    scanf("%s", &a);
    for (i = 0; i < a[i] != '\0'; i++)
    { // 문자열의 끝에 '\0'이 들어 있음
        if (a[i] >= 48 && a[i] <= 57)
        { // 아스키코드 0~9는 48~57이다
            res = res * 10 + (a[i] - 48);
        }
    }
    printf("%d\n", res);
    for(i=1; i<=res; i++) {
        if (res % i == 0)
        {
            cnt++;
        }
        
    }

    printf("%d\n", cnt);

    return 0;
}