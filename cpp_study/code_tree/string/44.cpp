#include <iostream>
#include <string>
using namespace std;
/*
문자열 돌리기:
내 풀이
*/
int main()
{
    freopen("input.txt", "rt", stdin);
    string s;
    cin >> s;
    int L = s.size();
    cout << s << '\n';
    while(L-- > 0) {
        s = s.substr(s.size()-1, 1) + s.substr(0, s.size() - 1);
        cout << s << '\n';
    }
    return 0;
}