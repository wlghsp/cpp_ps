#include <iostream>
#include <string>
using namespace std;
/*
붙여서 합하기:
내 풀이
*/
int main()
{
    freopen("input.txt", "rt", stdin);
    string a, b;
    cin >> a >> b;
    int ab = stoi(a + b);
    int ba = stoi(b + a);
    cout << ab + ba;
    return 0;
}