#include <iostream>
#include <string>
using namespace std;
/*
특정 문자로 시작하는 문자열: 내 풀이
*/
int main()
{
    freopen("input.txt", "rt", stdin);
    int n;
    cin >> n;
    string arr[n];
    int cnt = 0;
    int total = 0;
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    char c;
    cin >> c;
    for(int i = 0; i < n; i++) {
        if(arr[i][0] == c) {
            total += arr[i].length();
            cnt++;
        }
    }
    
    cout << fixed;
    cout.precision(2);
    cout << cnt << " " << (double) total / cnt;
    
    return 0;
}