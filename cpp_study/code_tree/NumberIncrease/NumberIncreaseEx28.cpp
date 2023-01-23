#include <iostream>

using namespace std;

int main()
{
    int cnt = 1;
    for(int i = 1; i <= 19; i++) {
        for(int j = 1; j <= 19; j++) {
            cout << i << " * " << j << " = " << i * j;            
            if (j % 2 == 1 && j != 19) cout << " / ";
            else cout << '\n';
        }
    }
    return 0;
}