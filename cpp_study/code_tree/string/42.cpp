#include <iostream>
#include <string>
using namespace std;
/*
e 제거하기
: 내 풀이
*/
int main()
{
    freopen("input.txt", "rt", stdin);
    string a;
    cin >> a;
    for(int i =0; i < a.length(); i++) {
        if(a[i] == 'e') {
            a = a.substr(0, i) + a.substr(i+ 1);
            break;
        }
    }
    cout << a;
    
    return 0;
}