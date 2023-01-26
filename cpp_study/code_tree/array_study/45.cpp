#include <iostream>
using namespace std;
/*
자동차 단일 거래 이익 최대화하기
*/
int main()
{
    freopen("input.txt", "rt", stdin);
    int a[10], b[10];
    int c = 0, d = 0;
    for(int i = 0; i < 10; i++) {
        int t;
        cin >> t;
        if(t > 500) b[d++] = t;
        else a[c++] = t;
    }
    int max_val = 0;
    for(int i = 0; i < c; i++) {
        if(a[i] > max_val) max_val = a[i];
    }
    int min_val = 1000;
    for(int i = 0; i < d; i++) {
        if(b[i] < min_val) min_val = b[i];
    }
    cout << max_val << " " << min_val;

    return 0;
}