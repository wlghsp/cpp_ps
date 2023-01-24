#include <iostream>

using namespace std;

int main()
{
    // 변수 선언 및 입력
    int n;
    cin >> n;
    char cnt = 'A';

    // 알파벳을 역삼각형 모양으로 출력합니다.
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
            cout << "  ";
        for (int j = 0; j < n - i; j++)
        {
            cout << cnt << " ";
            cnt++;
            if (cnt > 'Z')
                cnt = 'A';
        }
        cout << endl;
    }

    return 0;
}