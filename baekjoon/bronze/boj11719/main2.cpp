#include<iostream>

using namespace std;

int main()
{
    /*
        한줄에 100글자, 최대 100줄로 정해져 있어 getlineㅇ으로 한줄씩 읽은 다음 출력

    */

    string text;
    while (getline(cin, text))
    {
        cout << text << endl;
    }
    
    
}