#include <iostream>
#include <string>
using namespace std;
/*
합을 옆으로 밀어 출력:
내 풀이
*/
int main()
{
    freopen("input.txt", "rt", stdin);
    int n;
    cin >> n;
    int sum = 0;
    int num;
    for (int i = 0; i < n; i++)
    {
        cin >> num;
        sum += num;
    }
    string str = to_string(sum);
    cout << str.substr(1, str.size() - 1) + str[0];
    return 0;
}