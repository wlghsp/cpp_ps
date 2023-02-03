#include <iostream>
#include <string>
using namespace std;
/*
a로 채워넣기
: 내 풀이
*/
int main()
{
    freopen("input.txt", "rt", stdin);
    string str;
    cin >> str;
    str[1] = 'a';
    str[str.size() - 2] = 'a';
    cout << str;
    return 0; 
}