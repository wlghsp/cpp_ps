#include <iostream>

using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    for(int j = 1; j <= 9; j++) {
        for(int i = b; i >= a; i--) {
            if (i % 2 == 0)
            {
                cout << i << " * " << j << " = " << i * j;
                if(i > a) cout << " / ";
            }
        }
        cout << '\n';
    }

    return 0;
}