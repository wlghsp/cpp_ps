#include <iostream>
using namespace std;

int main()
{
    freopen("input.txt", "rt", stdin);
    int arr[10];
    int cnt = 0;
    for (int i = 0; i < 10; i++)
    {
        int num;
        cin >> num;
        if (num == 0) {
            break;
        }
        arr[i] = num;
        cnt++;
    }

    for (int j = cnt - 1; j >= 0; j--)
    {
        cout << arr[j] << " ";
    }

    return 0;
}