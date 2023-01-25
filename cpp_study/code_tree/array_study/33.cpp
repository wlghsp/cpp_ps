#include <iostream>
using namespace std;
/*
연속부분수열 확인

나의 풀이
*/
int main()
{
    freopen("input.txt", "rt", stdin);
    int n1, n2;
    cin >> n1 >> n2;

    int arr1[n1];
    int arr2[n2];

    for (int i = 0; i < n1; i++)
    {
        cin >> arr1[i];
    }
    for (int i = 0; i < n2; i++)
    {
        cin >> arr2[i];
    }
    int cnt = 0;
    for (int i = 0; i < n2; i++)
    {
        cnt = 0;
        for (int j = 0; j < n1; j++)
        {
            if (arr1[j] == arr2[i])
            {
                cnt++;
                int idx = i;
                while (true)
                {
                    idx++;
                    j++;
                    if (arr2[idx] == arr1[j])
                    {
                        cnt++;
                    }
                    else
                        break;
                }
                if (cnt >= n2)
                {
                    cout << "Yes";
                    return 0;
                }
                cnt = 0;
            }
        }
    }
    cout << "No";
    return 0;
}