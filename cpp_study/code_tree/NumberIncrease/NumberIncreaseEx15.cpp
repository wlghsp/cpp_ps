#include <iostream>

using namespace std;

int main()
{
    int n, num;
    cin >> n;
    int cnt = 1;
    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
        {
            for (int j = 0; j < n; j++)
            {
                cout << cnt++ << " ";
            
            }
        }
        else
        {
            num = cnt + n - 1;
            cnt = num + 1;
            for (int j = n - 1; j >= 0; j--)
            {
                cout << num-- << " ";
            }
        }
        cout << '\n';
    }
    return 0;
}