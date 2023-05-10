#include <iostream>
#include <algorithm>
using namespace std;

/*

구간 정하기
*/

int n = 6;
int arr[6] = {4, -5, 8, -1, -6, 9};

int main() {
    int max_sum = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            int sum_val = 0;
            for(int k = i; k <= j; k++)
                sum_val += arr[k];
            max_sum = max(max_sum, sum_val);
        }
    }
    cout << max_sum;    
    
    return 0;
}