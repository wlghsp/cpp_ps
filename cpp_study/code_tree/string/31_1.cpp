#include <iostream>
#include <string>
using namespace std;
/*
부분문자열 위치 구하기
: 내 풀이
*/
int main()
{
    freopen("input.txt", "rt", stdin);
    string input_str, target_str;
    cin >> input_str >> target_str;

    int input_len = input_str.size();
    int target_len = target_str.size();
    for(int i = 0; i < input_len; i++) {
        if(i + target_len - 1 >= input_len) continue;

        bool is_matched = true;
        for(int j = 0; j < target_len; j++) {
            if(input_str[i+j] != target_str[j]) is_matched= false;
        }
        if(is_matched) {
            cout << i;
            return 0;
        }
    }

    // 매칭이 되지 않는 경우 
    cout << -1;
    return 0; 
}