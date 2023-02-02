#include <iostream>
#include <string>
using namespace std;
/*
짝수 번째만 거꾸로 출력: 내 풀이
*/
int main()
{
    freopen("input.txt", "rt", stdin);
    string A;
    cin >> A;
    string result = "";
    for(int i = 0; i < A.length(); i++) {
        if(i % 2 != 0) {
            result += A[i];
        }
    }
    for(int i = result.length() - 1; i >= 0; i--) {
        cout << result[i];
    }
    return 0;
}