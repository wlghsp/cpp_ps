#include <iostream>
using namespace std;

int main()
{
    freopen("input.txt", "rt", stdin);
    int arr[100];
    int new_arr[100];
    int zero_point;
    for(int i = 0; i < 100;i++) {
        cin >> arr[i];
        if (arr[i] == 0) {
            zero_point  = i;
            break;
        }
        if(arr[i] % 2 == 0)
            new_arr[i] = arr[i] / 2;
        else 
            new_arr[i] = arr[i] + 3;
            
    }
    for(int j = 0; j < zero_point; j++) {
        cout << new_arr[j] << " ";
    }
    return 0;
}