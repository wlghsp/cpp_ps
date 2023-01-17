#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    // 체질량 지수 구하기
    int height, weight;
    cin >> height >> weight;
    double h = (double) height / 100;
    cout << h << '\n';
    int d = weight / (h * h);
    cout << d;
    return 0;
}