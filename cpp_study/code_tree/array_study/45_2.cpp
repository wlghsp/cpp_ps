#include <iostream>
#define MAX_NUM 1000
using namespace std;
/*
자동차 단일 거래 이익 최대화하기 : 내 풀이
*/
int main()
{
    freopen("input.txt", "rt", stdin);
    int n;
    int price[MAX_NUM];
    // 입력
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> price[i];

    // 배열을 앞에서부터 순회하며 최솟값을 갱신해줍니다.
    // 각 원소에 대하여 해당 시점의 최솟값과의 차이가
    // 최대가 될 때를 갱신해줍니다.
    int max_profit = 0;
    int min_price = price[0];
    for(int i = 0; i < n; i++) {
        int profit = price[i] - min_price;

        // 답을 갱신해줍니다. 
        if(profit > max_profit) {
            max_profit = profit;
        }

        // 지금까지의 최솟값을 갱신해줍니다.
        if (min_price > price[i])
        {
            min_price = price[i];
        }
    }
    
    cout << max_profit;

    return 0;
}