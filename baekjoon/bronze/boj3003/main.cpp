#include<iostream>

using namespace std;


int main() 
{   // 3003 킹, 퀸, 룩, 비숍, 나이트, 폰
    int chess[] = {1, 1, 2, 2, 2, 8};

    for (int i = 0; i < 6; i++)
    {
        int num;
        cin >> num;
        cout << chess[i] - num << " ";
    }

    return 0;

}