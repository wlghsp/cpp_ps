#include <iostream>
#include <string>
#include <cctype>
using namespace std;
/*
대문자 소문자 바꾸기:
내 풀이
*/
int main()
{
    freopen("input.txt", "rt", stdin);
    string s;
    cin >> s;
    for(int i = 0; i < s.size(); i++) {
        if('a' <= s[i] && s[i] <= 'z') cout << (char) toupper(s[i]);
        else cout << (char) tolower(s[i]);
    }
    return 0;
}