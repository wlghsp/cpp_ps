#include<iostream>
#include<algorithm>
using namespace std;

int main() 
{
    int n,k;
    cin >> n >> k;

    int* data = new int[n];

    for (int i = 0; i < n; i++)
    {
        cin >> data[i];
    }

    // Xi 중에 최솟값을 찾기 위한 정렬
    sort(data, data+n);

    int left = data[0];
    int right = data[0] + k;
    long long int answer = 0;

    
    while (left <= right)
    {
        int mid = (left + right) / 2;
        long long int added = 0;

        for (int i = 0; i < n; i++)
        {
            if (mid > data[i])
                added += mid - data[i];
        }

        if (added <= k)
        {
            left = mid + 1; // 좀 더 높은 레벨에서도 가능한지 계속 탐색한다.
            answer = mid > answer ? mid : answer;
        }
        else
        {
            right = mid - 1;
        }
    }

    cout << answer << '\n';
    
    return 0;
    
}