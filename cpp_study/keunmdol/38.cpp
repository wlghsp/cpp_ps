#include <bits/stdc++.h>
using namespace std;
int main() {
    string a = "abcda";
    string* b = &a;
    cout << b << '\n';  // 주소
    cout << *b << '\n';  // 주소를 기반으로 값
    return 0;
}