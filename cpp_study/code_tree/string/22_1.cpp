#include <iostream>
#include <string>
using namespace std;
/*
짝수 번째만 거꾸로 출력: 내 풀이
*/
int main()
{
    freopen("input.txt", "rt", stdin);
    string str;
    cin >> str;
    int idx = str.length() - 1;
    if(idx % 2 == 0) idx--;
    for(int i = idx; i >= 0; i -= 2) {
        cout << str[i];
    }
    return 0;
}