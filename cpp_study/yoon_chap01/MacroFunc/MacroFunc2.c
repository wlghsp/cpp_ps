#include <stdio.h>
#define SQR(X) X *X
#define PRT(X) printf("계산 결과는 %d입니다.\n", X)

int main(void)
{
    int result;
    int x = 5;

    result = SQR(10);
    PRT(result);
    result = SQR(x);
    PRT(result);
    result = SQR(x + 3);
    PRT(result); // 23이 나옴. 매크로 함수는 인수를 컴파일 이전에 미리 치환하기 때문
    return 0;
}