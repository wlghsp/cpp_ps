#include <iostream>
#include <string>
using namespace std;
/*
문자열 두번 출력하기: 내 풀이
*/
int main()
{
    freopen("input.txt", "rt", stdin);
    string str;
    cin >> str;
    for(int i = 0; i < 2; i++) {
        cout << str << '\n';
    }
    return 0;
}