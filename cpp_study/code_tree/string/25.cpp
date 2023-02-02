#include <iostream>
#include <string>
using namespace std;
/*
문자열 나누기: 내 풀이
*/
int main()
{
    freopen("input.txt", "rt", stdin);
    int n;
    cin >> n;
    string result;
    for(int i = 0; i < n; i++) {
        string a;
        cin >> a;
        result += a;
    }
    for(int i = 1; i <= result.length(); i++) {
        cout << result[i-1];
        if(i % 5 == 0) cout << '\n';
    }

    return 0;
}