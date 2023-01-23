#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int n1 = 1, n2 = n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (j % 2 == 0)
            {
                cout << n1;
            }
            else
            {
                cout << n2;
            }
        }
        n1++;
        n2--;
        cout << '\n';
    }
    return 0;
}