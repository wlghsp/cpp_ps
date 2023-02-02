#include <iostream>
#include <string>
using namespace std;
/*
부분 문자열의 개수
: 내 풀이
*/
int main()
{
    freopen("input.txt", "rt", stdin);
    string a, b;
    cin >> a >> b;
    int cnt = 0;
    for(int i = 0; i < a.size() - 1; i++) {
        if(a.substr(i, 2) == b) cnt++;
    }
    cout << cnt;
    return 0; 
}