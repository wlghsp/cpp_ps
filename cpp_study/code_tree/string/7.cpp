#include <iostream>
#include <string>
using namespace std;
/*
문자 개수 세기: 내 풀이
*/
int main()
{
    freopen("input.txt", "rt", stdin);
    string a;
    getline(cin, a);
    char c;
    cin >> c;
    int cnt = 0;
    for(int i = 0; i < a.length(); i++) {
        if(a[i] == c) cnt++;
    }
    printf("%d", cnt);
    return 0;
}