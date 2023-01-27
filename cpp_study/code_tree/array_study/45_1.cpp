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

    // 배열을 앞에서부터 순회하며 사는 시점의 후보를 선택합니다
    int max_profit = 0;
    for (int i = 0; i < n; i++)
    {
        // 사는 시점의 다음 해부터 순회하며 파는 시점의 후보를 선택합니다.
        for (int j = i + 1; j < n; j++)
        {
            int profit = price[j] - price[i];
            if (profit > max_profit)
                max_profit = profit;
        }
    }
    cout << max_profit;

    return 0;
}