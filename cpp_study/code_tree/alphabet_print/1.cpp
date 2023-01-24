#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    char alphabet = 'A';
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cout << alphabet++;
        }
        cout << '\n';
    }
}