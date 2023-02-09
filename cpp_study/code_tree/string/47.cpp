#include <iostream>
#include <string>
using namespace std;
/*
아스키코드의 합과 차:
내 풀이
*/
int main()
{
    freopen("input.txt", "rt", stdin);
    char a, b;
    cin >> a >> b;
    int a_num = (int) a;
    int b_num = (int) b;

    cout << a_num + b_num << " ";
    cout << (a_num > b_num ? a_num - b_num : b_num - a_num);
    return 0;
}