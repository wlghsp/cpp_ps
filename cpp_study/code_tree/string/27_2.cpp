#include <iostream>
#include <string>
using namespace std;
/*
특정 문자열 포함 여부: 내 풀이
*/
int main()
{
    string s = "appleabanana";
	string t = "abbaba";

    int n = s.length();
    bool exists = false;

    int len_t = t.length();

    for(int i = 0; i < n - len_t + 1; i++) {
        bool all_same = true;
        for(int j = 0; j < len_t; j++) {
            if(s[i+j] != t[j]) all_same = false;
        }
        if(all_same) exists = true;
    }    

    if(exists) cout << "true";
    else cout << "false";
    return 0;
}