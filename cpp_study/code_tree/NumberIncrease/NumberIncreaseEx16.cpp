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
                cout << cnt << " ";
                if (j != n -1) cnt++;
            }
            cnt += 2;
        }
        else
        {
            for (int j = 0; j < n; j++)
            {
                cout << cnt << " ";
                if (j != n -1) cnt += 2;
            }
            cnt++;
        }
        cout << '\n';
    }
    return 0;
}