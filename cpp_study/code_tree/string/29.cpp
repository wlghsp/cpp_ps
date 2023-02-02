#include <iostream>
#include <string>
using namespace std;
/*
문자열의 특정 위치 찾기
: 내 풀이
*/
int main()
{
    freopen("input.txt", "rt", stdin);
    string s;
    char c;
    cin >> s >> c;
    int idx = -1;
    for(int i = 0; i < s.length(); i++) {
        if(s[i] == c) {
            idx = i;
            break;
        }
    }
    if(idx == -1) cout << "No";
    else cout << idx;
    return 0; 
}