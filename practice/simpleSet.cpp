#include <iostream>

using namespace std;

int main()
{
    int data[5];
    int idx = 0;
    bool flag = true;

    while (true)
    {
        int num;
        cin >> num;
        for (int i = 0; i < idx; i++)
        {
            if (data[i] == num)
            {
                cout << num << "은 이미 집합에 있음." << '\n';
                flag = false;
                break;
            }
        }

        if (flag)
        {
            data[idx++] = num;

            cout << "{";
            for (int i = 0; i < idx - 1; i++)
            {
                cout << " " << data[i] << ", ";
            }

            cout << data[idx - 1] << "}" << '\n';

            if (idx == 5)
            {
                break;
            }
        }
    }
}