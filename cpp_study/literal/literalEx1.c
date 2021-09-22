/* 문자열 */

#include <stdio.h>

int main()
{
    char str[] = "sentence";
    char *pstr = "sentence";

    printf("str : %s \n", str);
    printf("pstr : %s \n", pstr);
    printf("%d \n", "sentence");

    return 0;
}