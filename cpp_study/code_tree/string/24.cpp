#include <iostream>
#include <string>
using namespace std;
/*
문자열 추가하기: 내 풀이
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
    cout << result;
    return 0;
}