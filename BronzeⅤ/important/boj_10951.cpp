#include <iostream>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int a, b;

    while (true)
    {
        cin >> a >> b;
        if (cin.eof())
            break;
        cout << a + b << "\n";
    }
    return 0;
}