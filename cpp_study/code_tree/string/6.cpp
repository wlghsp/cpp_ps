#include <iostream>
#include <string>
using namespace std;
/*
가장 짧은 문자열: 내 풀이
*/
int main()
{
    freopen("input.txt", "rt", stdin);
    string a;
    getline(cin, a);
    for(int i = 2; i < 10; i++) {
        printf("%c", a[i]);
    }

    return 0;
}