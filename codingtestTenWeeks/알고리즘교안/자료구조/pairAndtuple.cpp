#include <bits/stdc++.h>
using namespace std;
pair<int, int> pi;
tuple<int, int, int> tl;
int a, b, c;

// 두가지의 값을 담아야 할 때 pair, 세가지 이상의 값 tuple

int main()
{
    pi = {1, 2};
    tl = make_tuple(1, 2, 3);
    tie(a, b) = pi;
    cout << a << " : " << b << "\n";
    tie(a, b, c) = tl;
    cout << a << " : " << b << " : " << c << "\n";
    return 0;
}