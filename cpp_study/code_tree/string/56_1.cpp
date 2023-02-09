#include <iostream>
#include <string>
using namespace std;
/*
정수만 추출하기:
해설 풀이
*/
int main()
{
    freopen("input.txt", "rt", stdin);
    string a, b;
    cin >> a >> b;
    string s1, s2;

    int len_a = a.length();
    int len_b = b.length();

    int idx1 = 0;
    int idx2 = 0;

    for (int i = 0; i < a.size(); i++)
    {
        if (a[i] >= '0' && a[i] <= '9')
            idx1++;
        else
            break;
    }
    for (int i = 0; i < b.size(); i++)
    {
        if (b[i] >= '0' && b[i] <= '9')
            idx2++;
        else
            break;
    }
    s1 = a.substr(0, idx1);
    s2 = b.substr(0, idx2);

    cout << stoi(s1) + stoi(s2);

    return 0;
}