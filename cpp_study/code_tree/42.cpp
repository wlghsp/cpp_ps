#include <iostream>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    // 소수점 20자리까지 출력 
    // a 를 b로 나눈 나머지 곱하기 10을 
    int a, b;
    cin >> a >> b;
    cout << a / b << "."; 
    int i = 0;
    a = a % b * 10;
    while(i < 20) {
        cout << (a / b);
        a = a % b *10;
        i++;
    }
    return 0;
}