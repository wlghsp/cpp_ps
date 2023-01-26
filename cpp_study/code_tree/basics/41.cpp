#include <iostream>
using namespace std;
bool check(int a, char c) {
    return (a >= 19 || c == 'M');
}
int main() {
    // 여기에 코드를 작성해주세요.
    int a, b;
    char aG, bG;
    cin >> a >> aG >> b >> bG;
    cout << a << " " << aG << '\n' << b << " " << bG;
    cout << (check(a, aG) || check(b, bG));
    return 0;
}

