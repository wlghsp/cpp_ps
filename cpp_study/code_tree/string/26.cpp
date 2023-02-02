#include <iostream>
#include <string>
using namespace std;
/*
문자열 나누기: 내 풀이
*/
int main()
{
    freopen("input.txt", "rt", stdin);
    string a, b;
    cin >> a >> b;
    string ab = a + b;
    string ba = b + a;
    bool same = true;
    if(ba == ab) same = true;
    else same = false;
    cout << (same ? "true" : "false");
    return 0;
}