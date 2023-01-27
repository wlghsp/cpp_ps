#include <iostream>
using namespace std;
/*
자동차 단일 거래 이익 최대화하기 : 내 풀이
*/
int main()
{
    freopen("input.txt", "rt", stdin);
    int n;
    cin >> n;
    int arr[n];
    int profits[n] = {};
    for(int i = 0; i < n; i++) cin >> arr[i];
    int idx = 0;


    while(idx < n) {
        int buy_price = arr[idx];
        int max_profit = 0;
        for(int i = idx + 1; i < n; i++) {
            if((arr[i] - buy_price) > max_profit) {
                max_profit = arr[i] - buy_price;
            }
        }
        profits[idx] = max_profit;
        idx++;
    }

    int max = profits[0];
    for(int i = 1; i < n; i++) {
        if(profits[i] > max) {
            max = profits[i];
        }
    }
    cout << max;
    return 0;
}