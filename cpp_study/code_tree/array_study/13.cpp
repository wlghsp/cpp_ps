#include <iostream>
using namespace std;

int main()
{
    //freopen("input.txt", "rt", stdin);
    int arr[100];
    int i = 0;
    for(;;) {
        cin >> arr[i];
        if(arr[i] == 0) {
            break;
        }
        i++;
    }
    cout << (arr[i-1] + arr[i-2] + arr[i-3]);
    return 0;
}