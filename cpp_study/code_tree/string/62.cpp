#include <iostream>
#include <string>
using namespace std;
/*
문자열 거꾸로 출력하기:
내 풀이
*/
int main()
{
    freopen("input.txt", "rt", stdin);
    string s;
    while (true)
    {
        cin >> s;
        if(s == "END") break;
        for (int i = s.size() - 1; i >= 0; i--) 
        {
            cout << s[i];
        }
        cout << '\n';
    }
    
    return 0;
}