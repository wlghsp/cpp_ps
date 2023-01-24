#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int a, b;
        cin >> a >> b;
        int sum_val = 0;
        for(int j = a; j <= b; j++) {
            if(j % 2 == 0) sum_val += j;
        }
        cout << sum_val << '\n';
    }
    return 0;
}