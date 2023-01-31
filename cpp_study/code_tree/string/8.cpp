#include <iostream>
#include <string>
using namespace std;
/*
 공백을 기준으로 출력: 내 풀이
*/
int main()
{
    freopen("input.txt", "rt", stdin);
    string a, b;
    getline(cin, a);
    getline(cin, b);
    for(int i = 0; i < a.length(); i++) {
        if(a[i] != ' ') {
            cout << a[i];
        }
    }
    for(int i = 0; i < b.length(); i++) {
         if(b[i] != ' ') {
             cout << b[i];
        }
    }
    return 0;
}