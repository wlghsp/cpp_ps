#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int cnt = 1;
    for(int i = n; i > 0; i--) {
        for(int j = i; j <= n; j++) {
            cout << j << " ";
        }
        cout << '\n';
    }
    return 0;
}