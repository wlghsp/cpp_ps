#include <iostream>
#include <string>
using namespace std;
/*
Run Length 인코딩: 내 풀이
*/
int main()
{

    freopen("input.txt", "rt", stdin);
    string A;
    cin >> A;
    A = A + " ";
    string result = "";
    int cnt = 1;
    for(int i = 0; i < A.length() -1; i++) {
        if(A[i] == A[i+1]) {
            cnt++;
        } else {
            result += A[i];
            result += to_string(cnt);
            cnt = 1;
        }

    }
    cout << result.length() << '\n' << result;    

    return 0;
}