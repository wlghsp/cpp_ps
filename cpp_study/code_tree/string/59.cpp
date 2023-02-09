#include <iostream>
#include <string>
using namespace std;
/*
각 자리 숫자들의 합:
내 풀이
*/
int main()
{
    freopen("input.txt", "rt", stdin);
    int n;
    cin >> n;
    int sum = 0;
    while (n != 0)
    {
        sum += n % 10;
        n /= 10;
    }
    cout << sum;
    return 0;
}