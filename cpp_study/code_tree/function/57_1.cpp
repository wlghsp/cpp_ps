#include <iostream>
#include <string>
#include <tuple>
using namespace std;
/*
007
: 해설 튜플 풀이
*/

// Spy 정보를 나타내는 tuple 선언
tuple<string, char, int> spy;

int main() {

    freopen("input.txt", "rt", stdin);
    string s_code;
    char m_point;
    int given_time;
    cin >> s_code >> m_point >> given_time;

    // tuple type의 데이터를 하나 만들어 줍니다.
    spy = make_tuple(s_code, m_point, given_time);

    // tuple 값들을 변수에 대입
    string secret_code;
    char meeting_point;
    int time;
    tie(secret_code, meeting_point, time) = spy;

    cout << "secret code : " << secret_code << endl;
    cout << "meeting point : " << meeting_point << endl;
    cout << "time : " << time;

}