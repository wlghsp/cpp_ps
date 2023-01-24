#include <iostream>
using namespace std;

int main()
{
    double sum_val = 0;
    int n = 8;
    while (n-- > 0)
    {
        double d;
        cin >> d;
        sum_val += d;
    }
    cout << fixed;
    cout.precision(1);
    cout << sum_val / 8;
    return 0;
}