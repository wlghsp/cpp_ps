#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    for(int i = n-1; i >= 0; i--) {
        for(int j = n - i - 2; j >= 0; j--) {
            cout << "  ";
        }
        for(int j = 2 * i; j >= 0; j--) {
            cout << "* ";
        }
       
        cout << '\n';
    }
    return 0;
}