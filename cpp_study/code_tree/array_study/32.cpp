#include <iostream>
using namespace std;

int main()
{
    freopen("input.txt", "rt", stdin);
    int n, q;
    cin >> n >> q;
    int arr[n + 1];
    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];
    }
    int f;
    int a, b, idx;
    for (int i = 0; i < q; i++)
    {
        cin >> f;
        // 1 a a번째 원소 출력
        if (f == 1)
        {
            cin >> a;
            cout << arr[a] << '\n';
        }
        // 2 a가 있는지 판단
        else if (f == 2)
        {
            cin >> a;
            idx = 0;
            for (int i = 1; i <= n; i++)
            {
                if (arr[i] == a)
                {
                    idx = i;
                    break;
                }
            }
            cout << idx << '\n';
        }
        // 3 a b a~b까지 출력
        else if (f == 3)
        {
            cin >> a >> b;
            for (int i = a; i <= b; i++)
            {
                cout << arr[i] << " ";
            }
            cout << '\n';
        }
    }
    return 0;
}