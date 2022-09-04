#include <stdio.h>

int digit_sum(int x) { // 자릿수의 합을 구함
    int tmp, sum = 0;
    while (x > 0) {
        tmp = x % 10;
        sum += tmp;
        x /= 10;
    }
    return sum;
}

int main()
{
    //freopen("input.txt", "rt", stdin);
    int n, num, i, sum, max=-2147000000, res;
    scanf("%d", &n);
    for(i = 0; i < n; i += 1){
        scanf("%d", &num);
        sum = digit_sum(num);
        if (sum > max) {
            max = sum;
            res = num;      
        }
        else if (sum == max) {
            if(num > res) res = num;
        }
    }
    printf("%d\n", res);

    return 0;
}