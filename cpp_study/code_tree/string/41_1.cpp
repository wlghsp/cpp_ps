#include <iostream>
#include <string>
using namespace std;
/*
문자열 계속 지우기
: 해설
*/
int main()
{
    freopen("input.txt", "rt", stdin);
    string str_a, str_b;
    cin >> str_a >> str_b;
    int len_a = str_a.length();
    int len_b = str_b.length();

    while (true)
    {
        int idx = -1;

        int candidates = len_a - len_b + 1;

        for(int i = 0; i < candidates; i++) {
            bool is_same = true;
            for(int j = 0; j < len_b; j++) {
                if(str_a[i+j] != str_b[j]) {
                    is_same = false;
                    break;
                }
            }
            if(is_same) {
                idx = i;
                break;
            }
        }

        if(idx == -1) break;

        str_a = str_a.substr(0, idx) + str_a.substr(idx + len_b);
        
        len_a = str_a.length();
    }
    cout << str_a;
    return 0;
}