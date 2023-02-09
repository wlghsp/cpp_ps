#include <iostream>
#include <string>
using namespace std;
/*
그 다음 알파벳:
내 풀이
*/
int main()
{
    freopen("input.txt", "rt", stdin);
    char c;
    cin >> c;
    int n  = ((int) c) + 1;
    if(n > 122) n = 97;
    cout << (char) n;
    return 0;
}