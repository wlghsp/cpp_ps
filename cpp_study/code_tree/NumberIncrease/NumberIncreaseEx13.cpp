#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int cnt = 9;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i % 2 == 0)
            {
                cout << j + 1;
            }
            else
            {
                cout << n - j;
            }
        }
        cout << '\n';
    }
    return 0;
}