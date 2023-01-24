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
        if (num == 0) break;
        if (num % 2 == 0) {
            sum_val += num;
            cnt++;
        }
    }
    cout << cnt <<  " ";
    cout << sum_val;

    return 0;
}