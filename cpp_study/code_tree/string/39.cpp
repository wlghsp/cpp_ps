#include <iostream>
#include <string>
using namespace std;
/*
양옆 문자 제거하기
: 내 풀이

문자열이 주어지면, 앞에서 2번째 원소와 뒤에서 2번째 원소를 제거한 후의 문자열을 출력하는 프로그램을 작성해보세요.

입력 형식
첫 번째 줄에 길이가 10 이상이고, 100이하인 문자열이 주어집니다.

출력 형식
첫 번째 줄에 해당하는 문자열을 출력합니다.
*/
int main()
{
    freopen("input.txt", "rt", stdin);
    string str;
    cin >> str;
    char a = str[0];
    char b = str[1];
    for(int i = 0; i < str.size(); i++) {
        if(str[i] == b) str[i] = a;
    }
    cout << str;

    return 0;
}