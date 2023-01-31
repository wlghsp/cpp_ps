#include <iostream>
#include <string>
using namespace std;
/*
정수만 더하기: 내 풀이
*/
int main()
{

    char s[15] = "congratulation";
    int i;
    for (i = 0; i < 14; i++)
    {
        if (s[i] == 'a')
            continue;
        if (s[i] == 'e')
            continue;
        if (s[i] == 'i')
            continue;
        if (s[i] == 'o')
            continue;
        if (s[i] == 'u')
            continue;
        printf("%c", s[i]);
    }
    printf("\n");

    return 0;
}