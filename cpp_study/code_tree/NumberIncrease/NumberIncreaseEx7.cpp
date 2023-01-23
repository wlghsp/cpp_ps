#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    int num = 9;
    for(int i = 0; i < n; i++) {
        num += 2;
        int t = num;
        for(int j = 0; j < n; j++) {
            cout << t << " ";
            t += 2;
        }
        cout << '\n';
    }
    return 0;
}