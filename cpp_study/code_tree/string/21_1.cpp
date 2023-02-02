#include <iostream>
#include <string>
using namespace std;
/*
Run Length 인코딩: 해설
*/
int main()
{

    freopen("input.txt", "rt", stdin);
    string A;
    cin >> A;

    // 변환
    string encoded = "";

    // 입력의 첫번째 값을 읽고 초기화합니다. 
    char curr_char = A[0];
    int num_char = 1;
    for(int i = 1; i < A.length(); i++) {
        if(A[i] == curr_char) num_char++;
        else {
            encoded += curr_char;
            encoded += to_string(num_char);
            curr_char = A[i];
            num_char = 1;
        }
    }
    encoded += curr_char;
    encoded += to_string(num_char);

    cout << encoded.length() << '\n' << encoded;

    return 0;
}