#include <iostream>

using namespace std;
bool check(int n)
{
    int ans = 1;
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0) return false;
    }
    return true;
}

int main()
{
    // 변수 선언 및 입력
    int n;
    cin >> n;
    for (int i = 2; i <= n; i++)
    {
        if (check(i))
        {
            cout << i << " ";
        }
    }
    return 0;
}