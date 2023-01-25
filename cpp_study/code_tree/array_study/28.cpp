#include <iostream>
using namespace std;

int main()
{
    freopen("input.txt", "rt", stdin);
    int count_arr[4] = {};
    int type_num = 0;
    char c;
    int temp;
    for (int i = 0; i < 3; i++)
    {
        cin >> c >> temp;
        if (c == 'Y')
        { 
            if (temp >= 37)
            {
                type_num = 0;
            }
            else {
                type_num = 2;
            }
        }
        else {
            if (temp >= 37)
            {
                type_num = 1;
            }
            else {
                type_num = 3;
            }
        }
        count_arr[type_num]++;
    }
    for(int i = 0; i < 4; i++) {
        cout << count_arr[i] << " ";
    }
    if(count_arr[0] >= 2) {
        cout << "E";
    }

    return 0;
}