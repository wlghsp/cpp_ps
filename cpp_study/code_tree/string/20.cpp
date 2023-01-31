#include <iostream>
#include <string>
using namespace std;
/*
정수만 더하기: 내 풀이
*/
int main()
{

    freopen("input.txt", "rt", stdin);
    string str;
    cin >> str;
    int sum = 0;
    for(int i = 0; i < str.length(); i++) {
        if('0' <= str[i] && str[i] <= '9') {
            sum += (str[i] - '0');
        }    
    }
    cout << sum;
    
    return 0;
}