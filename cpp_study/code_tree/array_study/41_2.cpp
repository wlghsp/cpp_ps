#include <iostream>
using namespace std;
/*
n개의 숫자 중 최대 2개
*/
int main()
{
    freopen("input.txt", "rt", stdin);
    int A[100], n, max1, max2;

    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> A[i];
    }

    if (A[0] > A[1]) {
        max1 = A[0];
        max2 = A[1];
    } else {
        max1 = A[1];
        max2 = A[0];
    }

    for(int i = 2; i < n; i++) {
        if(A[i] >= max1) {
            max2 = max1;
            max1 = A[i];
        } else if (A[i] > max2) {
            max2 = A[i];
        }
    }
    cout << max1 << " " << max2;
    return 0;
}