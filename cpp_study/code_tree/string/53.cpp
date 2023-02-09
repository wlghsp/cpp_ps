#include <iostream>
#include <string>
#include <cctype>
using namespace std;
/*
소문자와 숫자:
내 풀이
*/
int main()
{
    freopen("input.txt", "rt", stdin);
    string s;
    cin >> s;
    for(int i = 0; i < s.size(); i++) {
        if('0' <= s[i] && s[i] <= '9') cout << s[i];
        else if((s[i] >= 'A' && s[i] <= 'Z') || (s[i] >= 'a' && s[i] <= 'z')) {
            cout << (char) tolower(s[i]);
        }
    }
    return 0;
}