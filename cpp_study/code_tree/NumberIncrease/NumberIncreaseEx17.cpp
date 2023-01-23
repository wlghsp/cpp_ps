#include <iostream>

using namespace std;

int main()
{
    int n, num;
    cin >> n;
    int cnt = 1;
    for (int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= n; j++) {
            cout << i << " * " << j << " = " << i * j;
            if(j < n) cout << ", ";    
        }
        cout << '\n';
    }
    return 0;
}