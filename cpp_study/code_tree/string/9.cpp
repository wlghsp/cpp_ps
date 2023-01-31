#include <iostream>
#include <string>
using namespace std;
/*
문자열의 특정 위치 찾기 2: 내 풀이
*/
int main()
{
    freopen("input.txt", "rt", stdin);
    char c;
    cin >> c;
    string arr[5] = {"apple", "banana", "grape", "blueberry", "orange"};
    int cnt = 0;
    for(int i = 0; i < 5; i++) {
        if(arr[i][2] == c || arr[i][3] == c) {
            cnt++;
            cout << arr[i] << '\n';
        }
    }
    cout << cnt;
    return 0;
}