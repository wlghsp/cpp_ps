#include <iostream>
#include <string>
using namespace std;
/*
문자열 내 문자 제거

*/
int main()
{
    string s = "baknana";
    // s = s.substr(0, 2) + s.substr(3);
    s.erase(2, 1);
    cout << s;
    return 0;
}