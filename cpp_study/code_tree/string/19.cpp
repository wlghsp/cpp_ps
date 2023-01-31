#include <iostream>
#include <string>
using namespace std;
/*
문자열 범위 출력하기 2: 내 풀이
*/
int main()
{

    freopen("input.txt", "rt", stdin);
    string str;
    int n;
    cin >> str;
    cin >> n;
    int cnt = 0;
    // int bottom = n > str.length() ? 0 : str.length() - n;
    for(int i = str.length() - 1; i >= 0; i-- ) {
        if(cnt >= n) break;
        cout << str[i];
        cnt++;
    }
    return 0;
}