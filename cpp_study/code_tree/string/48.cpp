#include <iostream>
#include <string>
using namespace std;
/*
아스키코드표 맞추기:
내 풀이
*/
int main()
{
    freopen("input.txt", "rt", stdin);
    int n;
    for (int i = 0; i < 5; i++)
    {
        cin >> n;
        cout << (char) n << " ";
    }
    
    return 0;
}