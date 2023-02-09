#include <iostream>
#include <string>
using namespace std;
/*
그 전 알파벳:
내 풀이
*/
int main()
{
    freopen("input.txt", "rt", stdin);
    char c;
    cin >> c;
    int n  = ((int) c) - 1;
    if(n < 97) n = 122;
    cout << (char) n;
    return 0;
}