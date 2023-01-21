#include <iostream>
using namespace std;

int main()
{
    int m = 0;
   
    int cnt = 0;
    int n = 0;
    while (n < 2147483648) {
        while (n != 1)
        {
            if (n % 2 == 0)
                n /= 2;
            else
                n = 3 * n + 1;
            m++;
        }
        n++;
        if (m == 5) cnt++;
    }
    cout << cnt;
    return 0;
}