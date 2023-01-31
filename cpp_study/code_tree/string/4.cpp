#include <iostream>
using namespace std;
/*
문자열의 길이 출력하기: 내 풀이
*/
int main()
{
    char str1[] = "abcde";
    char str2[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g'};
    int len1 = sizeof(str1) - 2;
    int len2 = sizeof(str2) - 3;
    cout << sizeof(str1);
    printf("%c %c", str1[len2], str2[len1]);

    return 0;
}