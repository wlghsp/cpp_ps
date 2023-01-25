#include <iostream>
#include <climits>
using namespace std;

int main()
{
    freopen("input.txt", "rt", stdin);
    int min_val = INT_MAX;
    int max_val = INT_MIN;
    while (1)
    {
        int t;
        cin >> t;
        if(t == 999 || t == -999) break;
        if(t > max_val) max_val = t;
        if(t < min_val) min_val = t;
    }
    cout << max_val << " " << min_val;
    return 0;
}