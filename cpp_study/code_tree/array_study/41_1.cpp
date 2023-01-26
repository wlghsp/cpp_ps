#include <iostream>
#include <algorithm>
#include <utility>
using namespace std;
// 정렬 활용 
/*
n개의 숫자 중 최대 2개
*/
int main()
{
    freopen("input.txt", "rt", stdin);
    int A[100], n;

    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> A[i];
    }
    sort(A, A+n, greater<int>());

    cout << A[0] << " " << A[1];
    return 0;
}