#include <iostream>
#include <string>
using namespace std;
/*
단어로 구분하기 2: 내 풀이
*/
int main()
{
    freopen("input.txt", "rt", stdin);
    int n = 10;
    string arr[n];
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    for(int i = 0; i < n; i++) {
        if (i % 2 == 0)
        {
            cout << arr[i] << '\n';
        }
        
    }
    return 0;
}