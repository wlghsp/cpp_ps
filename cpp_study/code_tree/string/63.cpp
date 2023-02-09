#include <iostream>
#include <string>
#include <vector>
using namespace std;
/*
문자열의 개수:
내 풀이
*/
int main()
{
    freopen("input.txt", "rt", stdin);
    string s;
    int cnt = 0;
    vector<string> v;
    while (true)
    {
        cin >> s;
        if(s == "0") break;
        cnt++;
        if (cnt % 2 != 0) {
            v.push_back(s);
        }
    }
    cout << cnt << '\n';
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << '\n';
    }
    return 0;
}