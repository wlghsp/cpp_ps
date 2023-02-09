#include <iostream>
#include <string>
#include <vector>
using namespace std;
/*
미는 횟수:
내 풀이
*/
int main()
{
    freopen("input.txt", "rt", stdin);
    string a, b;
    cin >> a >> b;
    int cnt = 0;
    bool found = false;
    for (int i = 0; i < a.size(); i++)
    {
        if (a == b) {
            found = true;
            break;
        }
        a = a[a.size() - 1] + a.substr(0, a.size() - 1);
        cnt++;
    }

    cout << (found ? cnt : -1);

    return 0;
}