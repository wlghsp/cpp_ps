#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    for(int i = n-1; i >= 0; i--) {
        for(int j= n-1; j >= 0; j--) {
            cout << j + 1 << " ";
        }
        cout << '\n';
    }
}