#include <iostream>
#include <string>
using namespace std;
/*
문자열 밀기:
내 풀이
*/
int main()
{
    freopen("input.txt", "rt", stdin);
    string s;
    cin >> s;
    s = s.substr(1) + s.substr(0, 1);
    cout << s;
    return 0;
}