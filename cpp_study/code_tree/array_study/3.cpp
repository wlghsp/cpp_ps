#include <iostream>
using namespace std;

int main()
{
    int sum = 0;
    int cnt = 0;
    for(int i = 0; i < 10; i++) {
        int n;
        cin >> n;
        if(n < 250) {
            sum+= n;
            cnt++;
        } else break;
    }
    cout << sum << " ";
    cout << fixed;
    cout.precision(1);
    cout << (double) sum / cnt;

    return 0;
}