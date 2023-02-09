#include <iostream>
#include <string>
#include <cctype>
using namespace std;
/*
대문자로 출력하기:
내 풀이
*/
int main()
{
    freopen("input.txt", "rt", stdin);
    string s;
    cin >> s;
    string result;
    for(int i = 0; i < s.size(); i++) {
       if((s[i] >= 'A' && s[i] <= 'Z') || (s[i] >= 'a' && s[i] <= 'z')) {
            cout << (char) toupper(s[i]); 
       }
    }
    cout << result;
    return 0;
}