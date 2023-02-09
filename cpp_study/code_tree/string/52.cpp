#include <iostream>
#include <string>
using namespace std;
/*
대문자로 출력하기:
내 풀이
*/
int main()
{
    freopen("input.txt", "rt", stdin);
    string s;
    cin >> s;
    string result;
    for(int i = 0; i < s.size(); i++) {
        int n = (char) s[i];
        if(65<= n && n <= 90) {
            result += s[i];
        } else if(97 <= n && n <= 122) {
            result += (char) (n - 32);
        }
    }
    cout << result;
    return 0;
}