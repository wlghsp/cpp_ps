#include <iostream>
#include <string>
using namespace std;
/*
특정 문자로 끝나는 문자열: 내 풀이
*/
int main()
{
    freopen("input.txt", "rt", stdin);
    int n = 10;
    string arr[n];
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    char c;
    cin >> c;
    bool exist = false;
    for(int i = 0; i < n; i++) {
        if (arr[i][arr[i].length() - 1] == c) 
        {
            exist = true;
            cout << arr[i] << '\n';
        }
    }

    if (!exist)
    {
        cout << "None";
    }
    
    return 0;
}