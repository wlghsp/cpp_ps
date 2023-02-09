#include <iostream>
#include <string>
using namespace std;
/*
일치하는 문자열의 수:
내 풀이
*/
int main()
{
    freopen("input.txt", "rt", stdin);
    int n;
    string A;
    cin >> n >> A;
    int cnt = 0;
    string str;
    for (int i = 0; i < n; i++)
    {
        cin >> str;
        if(A == str) cnt++;
    }
    cout << cnt;
    return 0;
}