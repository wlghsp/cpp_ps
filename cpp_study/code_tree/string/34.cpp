#include <iostream>
#include <string>
using namespace std;
/*
a로 채워넣기
: 내 풀이
*/
int main()
{
    freopen("input.txt", "rt", stdin);
    string a, b;
    cin >> a >> b;
    string front;
    b[0] = a[0];
    b[1] = a[1];
    cout << b;
    return 0; 
}