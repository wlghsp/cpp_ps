#include <iostream>
#include <string>
using namespace std;
/*
부분문자열 위치 구하기
: 내 풀이
*/
int main()
{
    freopen("input.txt", "rt", stdin);
    string str, s;
    cin >> str >> s;
    int idx = -1;
    if(str.find(s) != string::npos) {
        idx = str.find(s);
    }
    cout << idx;
    return 0; 
}