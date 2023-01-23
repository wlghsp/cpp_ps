#include <iostream>

using namespace std;

int main() {
    int n, t;
    cin >> n;
    for(int i = 1; i <= n; i++) {
        t = n * i;
        for(int j = 0; j < n; j++) {
            cout << t << " "; 
            t -= i;
        }
        cout << '\n';
    }
    return 0;
}