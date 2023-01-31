#include <iostream>
#include <string>
using namespace std;
/*
문자열에서 문자 출력: 내 풀이
*/
int main()
{

    freopen("input.txt", "rt", stdin);
    string arr;
    cin >> arr;
    for(int i = 0; arr[i] != '\0'; i++) {
        cout << arr[i] << endl;
    }
    return 0;
}