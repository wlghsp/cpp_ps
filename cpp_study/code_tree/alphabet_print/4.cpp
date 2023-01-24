#include <iostream>

using namespace std;

int main()
{
    // 변수 선언 및 입력
    int n;
    cin >> n;
    for(int i = 0; i < n; i++) {
        int a, b;
        cin >> a >> b;
        int multilple_val = 1;
        for(int j = a; j <= b; j++) {
            multilple_val *= j;
        }
        cout << multilple_val << '\n';
    }

    return 0;
}