#include <iostream>

using namespace std;

int main()
{
    double a, b;
    cin >> a >> b;
    cout.precision(10); // 소수점 10자리까 출력하겠다.
    cout << a / b;
    return 0;
}