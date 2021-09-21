#include <iostream>

using namespace std;

int main()
{
    int n;

    cin >> n;

    // N번 만큼 반복
    for (int i = 1; i <= n; i++)
    {
        // i행에성는 i개만큼 별을 출력
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }

        // 해당 행 출력이 끝났으면 반드시 줄바꿈을 해준다.
        cout << "\n";
    }

    return 0;
}