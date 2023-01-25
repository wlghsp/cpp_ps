#include <iostream>
using namespace std;

int main()
{
    freopen("input.txt", "rt", stdin);
    int A[100], n, max1, max2, max1_idx;

    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> A[i];
    }

    max1 = A[0];
    max1_idx = 0;
    for(int i = 1; i < n; i++) {
        if(A[i] > max1) {
            max1 = A[i];
            max1_idx = i;
        }
    }
    bool is_initialized = false;
    for(int i = 0; i < n; i++) {
        if(i == max1_idx) continue;

        if(is_initialized == false) {
            is_initialized = true;
            max2 = A[i];
        } else if (A[i] > max2) {
            max2 = A[i];
        }
    }
    cout << max1 << " " << max2;
    return 0;
}