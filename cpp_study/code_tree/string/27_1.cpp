#include <iostream>
#include <string>
using namespace std;
/*
특정 문자열 포함 여부: 내 풀이
*/
int main()
{
    string s = "applebanana";
    int length = s.length();
    bool exists = false;
    if(s.find("ab") != string::npos) {
        exists = true;
    }
    if(exists) cout << "true";
    else cout << "false";
    return 0;
}