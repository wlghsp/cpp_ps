#include <iostream>
using namespace std;
int main()
{
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    for (int i = 0; i < n * 2; i++)
    {
        if (i % 2 == 0)
        {
            for (int j = n - (i / 2) - 1; j >= 0; j--)
            {
                cout << "*"
                     << " ";
            }
            cout << '\n';
            
        }
        else
        {
            for (int j = 0; j <= i / 2; j++)
            {
                cout << "*"
                     << " ";
            }
            cout << '\n';
        }
    }
    return 0;
}