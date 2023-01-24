#include <iostream>
using namespace std;

int main()
{
    //freopen("input.txt", "rt", stdin);
    int n;
    cin >> n;
    int cnt = 0;
    for(int i = 0; i < n; i++) {
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        double average = (double) (a + b + c + d) / 4;
        if (average >= 60) {
            cnt++;
            cout << "pass" << '\n';
        }
        else cout << "fail" << '\n';
    }
    cout << cnt;    
    return 0;
}