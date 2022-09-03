#include <stdio.h>

using namespace std;

int main()
{
    // freopen("input.txt", "rt", stdin);
    char a[101], b[101];
    int i, p =0;
    gets(a); // 띄어쓰기 되어 있는 입력을 받을 때 쓰임 
    for(i =0; a[i] != '\0'; i++){
        if (a[i] != ' '){
            if (a[i] >= 65 && a[i] <= 90) { // 대문자
                b[p++] = a[i] + 32; // 32를 더하면 대문자-> 소문자
            }
            else b[p++] = a[i];
        }
    }
    b[p]='\0'; // 문자열의 끝을 표시해줘야 깔끔하게 처리 됨

    printf("%s\n", b);

    return 0;
}