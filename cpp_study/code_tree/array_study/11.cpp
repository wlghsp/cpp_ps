#include <iostream>
using namespace std;

int main()
{
    //freopen("input.txt", "rt", stdin);
    int sum_val = 0;
    for(int i = 0; i < 10; i++) {
        int n;
        cin >> n;
        if(i == 2 || i == 4 || i == 9) {
            sum_val += n;
        }
    }
    cout << sum_val;
    return 0;
}