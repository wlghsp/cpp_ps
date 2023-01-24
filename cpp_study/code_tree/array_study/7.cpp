#include <iostream>
using namespace std;

int main()
{
    //freopen("input.txt", "rt", stdin);
    int cnt = 0;
    double sum_val = 0;
    for (int i = 0; i < 10; i++)
    {
        int num;
        cin >> num;
        if (num == 0) {
            break;
        }
        sum_val += num;
        cnt++;
    }
    cout << sum_val <<  " ";
    cout << fixed;
    cout.precision(1);
    cout << sum_val / cnt;

    return 0;
}