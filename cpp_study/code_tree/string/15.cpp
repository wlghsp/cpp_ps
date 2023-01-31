#include <iostream>
#include <string>
using namespace std;
/*
단어로 구분하기 3: 내 풀이
*/
int main()
{
    freopen("input.txt", "rt", stdin);
    int n = 10;
    string arr[n];
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    for(int i = n - 1; i >= 0; i--) {
        cout << arr[i] << '\n';
        
    }
    return 0;
}