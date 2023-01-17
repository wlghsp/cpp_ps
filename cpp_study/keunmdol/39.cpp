#include <bits/stdc++.h>
using namespace std;
int a[3] = {1, 2, 3};
int main() {
    int* b = &a[0];
    int* c = a;
    int* d = (a + 1);
    cout << b << '\n';
    cout << c << '\n';
    cout << d << '\n';
    cout << &a[1] << '\n';
    return 0;
}