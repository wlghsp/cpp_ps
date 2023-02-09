#include <iostream>
#include <string>
using namespace std;
/*
규칙에 따라 밀기:
내 풀이
*/
int main()
{
    freopen("input.txt", "rt", stdin);
    string A, str;
    cin >> A >> str;
    int len = A.size();
    for (int i = 0; i < str.size(); i++)
    {
        if (str[i] == 'L')
        {
            A = A.substr(1, len - 1) + A[0];
        }
        else
        {
            A = A[len - 1] + A.substr(0, len - 1);
        }
    }
    cout << A;

    return 0;
}