#include <iostream>
#include <string>
using namespace std;
/*
부분 문자열의 개수
: 해설
*/
int main()
{
    freopen("input.txt", "rt", stdin);
    string a, b;
    cin >> a >> b;
    int cnt = 0;
    for(int i = 0; i < a.size() - 1; i++) {
        if(a[i] == b[0] && a[i+1] == b[1]) cnt++;
    }
    cout << cnt;
    return 0; 
}