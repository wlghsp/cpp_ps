#include <iostream>
#include <string>
using namespace std;
/*
첫 번째와 두 번째 교환
: 내 풀이
*/
int main()
{
    freopen("input.txt", "rt", stdin);
    string str;
    cin >> str;
    char a = str[0];
    char b = str[1];
    for(int i = 0; i < str.size(); i++) {
        if(str[i] == a) str[i] = b;
        else if(str[i] == b) str[i] = a;
    }
    cout << str;    
    return 0; 
}