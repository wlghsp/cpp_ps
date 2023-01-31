#include <iostream>
#include <string>
#include <climits>
using namespace std;
/*
가장 짧은 문자열: 내 풀이
*/
int main()
{
    freopen("input.txt", "rt", stdin);
    string a;
    int max_len = INT_MIN; 
    int min_len = INT_MAX; 
    for(int i = 0; i < 3; i++) {
        cin >> a;
        int len = a.length();
        if(len > max_len) max_len = len;
        if(len < min_len) min_len = len;
    }
    cout << max_len - min_len;

    return 0;
}