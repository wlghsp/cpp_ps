#include <iostream>
#include <string>
using namespace std;
/*
특정 문자의 유무: 내 풀이
*/
int main()
{
    freopen("input.txt", "rt", stdin);
    string str;
    cin >> str;
    bool a = false;
    bool b = false;
    if (str.find("ee") != string::npos) a = true;
    if (str.find("ab") != string::npos) b = true;
    cout << (a ? "Yes" : "No") << " " << (b ? "Yes" : "No");
    return 0;
}