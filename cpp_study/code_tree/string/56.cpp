#include <iostream>
#include <string>
using namespace std;
/*
정수만 추출하기:
내 풀이
*/
int main()
{
    freopen("input.txt", "rt", stdin);
    string a, b;
    cin >> a >> b;
    string s1, s2;
    for (int i = 0; i < a.size(); i++)
    {
        if (a[i] < '0' || a[i] > '9')
            break;
        s1 += a[i];
    }
    for (int i = 0; i < b.size(); i++)
    {
        if (b[i] < '0' || b[i] > '9')
            break;
        s2 += b[i];
    }
    cout << stoi(s1) + stoi(s2);

    return 0;
}