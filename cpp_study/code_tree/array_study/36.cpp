#include <iostream>
#include <climits>
using namespace std;

int main()
{
    int arr[6] = {-1, -5, -2, -5, -3, -9};

    // int max_val = INT_MIN;
    int max_val = arr[0];
    for(int i = 1; i < 6; i++) {
        if(arr[i] > max_val) {
            max_val = arr[i];
        }
    }
    cout << max_val;
    return 0;
}