#include <iostream>
#include <string>
using namespace std;
/*
특정 문자의 등장 횟수
: 내 풀이
*/
int main()
{
    freopen("input.txt", "rt", stdin);
    string str;
    cin >> str;
    int cnt1 = 0;
    int cnt2 = 0;
    for(int i = 0; i < str.length() - 1; i++) {
        if(str.substr(i, 2) == "ee") cnt1++;
        if(str.substr(i, 2) == "eb") cnt2++;
    }
    cout << cnt1 << " " << cnt2;
    return 0; 
}