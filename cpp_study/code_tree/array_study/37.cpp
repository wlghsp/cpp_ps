#include <iostream>
#include <climits>
using namespace std;

int main()
{
    freopen("input.txt", "rt", stdin);
    int max_val = INT_MIN;
    for(int i = 0; i < 10; i++) {
        int num;
        cin >> num;
        if(num > max_val) {
            max_val = num;
        }
    }
    cout << max_val;

    return 0;
}