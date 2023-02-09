#include <iostream>
#include <string>
using namespace std;
/*
두 수의 합과 1:
내 풀이
*/
int main()
{
    freopen("input.txt", "rt", stdin);
    int a, b;
    cin >> a >> b;
    string str = to_string(a + b);
    int cnt = 0;
    for (int i = 0; i < str.size(); i++)
    {
        if(str[i] == '1') cnt++;
    }
    
    cout << cnt;

    return 0;
}