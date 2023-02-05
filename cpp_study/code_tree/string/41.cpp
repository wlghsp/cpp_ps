#include <iostream>
#include <string>
using namespace std;
/*
문자열 계속 지우기
: 내 풀이
*/
int main()
{
    freopen("input.txt", "rt", stdin);
    string a, b;
    cin >> a >> b;
    int len = b.length();
    while(a.find(b) != string::npos) {
        int idx = a.find(b);
        a.erase(idx, len);
    }
    cout << a;
    
    return 0;
}