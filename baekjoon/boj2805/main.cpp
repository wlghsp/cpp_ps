#include<iostream>

using namespace std;

int main() {
    int n, m;

    // 1. n과 k를 입력 받는다.
    cin >> n >> m;

    int* data = new int[n];

    // n개의 데이터를 입력 받는다. 
    for (int i = 0; i < n; i++)
    {
        cin >> data[i];
    }

    // left와 right를 잘 고민해본다. 
    int left = 0;
    int right = 2000000000;

    long long int answer = 0;

    // 나무를 자르는 과정 나무 높이에서 절단기 높이를 빼고 이것들을 더한다. 
    while (left <= right)
    {
        int mid = (left + right) / 2;
        long long int added = 0;

        for (int i = 0; i < n; i++) 
        {
            if (data[i] > mid)
            {
                added += data[i] - mid;
            }
        }

        if (added >= m)
        {
            answer = mid;
            left = mid + 1;
        }
        else
        {
            right = mid - 1;
        }
    
    }

    cout << answer << '\n';
    delete[] data;
    return 0;

}