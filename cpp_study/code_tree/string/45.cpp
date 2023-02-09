#include <iostream>
#include <string>
using namespace std;
/*
문자열 한 칸씩 밀어내며 뒤집기:
내 풀이
*/
int main()
{
    freopen("input.txt", "rt", stdin);
    string s;
    int q, r;
    cin >> s >> q;
    for(int i = 0; i < q; i++) {
        cin >> r;
        if(r == 1) {
            s = s.substr(1, s.size() -1) + s[0];
        } else if (r == 2) {
            s = s[s.size() -1] + s.substr(0, s.size()- 1);
        } else {
            string n;
            for(int i = s.size()- 1; i >=0 ; i--) {
                n += s[i];
            }
            s = n;
        }
        cout << s << '\n';
    }
    return 0;
}