#include <iostream>
using namespace std;

int main()
{
    int pp = 1, p = 1; // pp 전전항, p 전 항
    for(int i = 3; i < 11; i++) {
        int temp = pp + p;
        pp = p;
        p = temp;
    }
    cout << p;
    return 0;
}