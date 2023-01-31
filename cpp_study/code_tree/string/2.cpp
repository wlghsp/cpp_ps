#include <iostream>
#include <string>
using namespace std;
/*
문자열의 길이 출력하기: 내 풀이
*/
int main()
{
    freopen("input.txt", "rt", stdin);
    string str1, str2;
    cin >> str1 >> str2;
    cout << (str1.length()+ str2.length());
    return 0;
}