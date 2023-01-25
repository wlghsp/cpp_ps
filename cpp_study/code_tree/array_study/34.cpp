#include <iostream>
using namespace std;
/*
연속부분수열 확인

해설 풀이
*/
int main()
{
    freopen("input.txt", "rt", stdin);
    int n1, n2;
    cin >> n1 >> n2;
    
    int arr1[100];
    int arr2[100];

    for(int i = 0; i < n1; i++) {
        cin >> arr1[i];    
    }
    for(int i = 0; i < n2; i++) {
        cin >> arr2[i];    
    }

    // arr2가 arr1의 연속부분수열인지 확인한다.
    for(int i = 0; i < n1; i++) {
        // arr1의 i번 index부터의 수열이 arr2와 완전히 일치하는지 확인합니다.
        // 즉, arr1[i] == arr2[0], arr1[i+1] == arr2[i]...이 성립하는지 확인한다.
        // success : arr1의 i번 index부터의 수열이 arr2와 완전히 일치할 때만 true, 그 외 false
        bool success = true;

        for(int j = 0; i < n2; j++) {
            // arr1의 index가 범위 밖으로 벗어날 때
            if (i + j >= n1) {
                success = false;
                break;
            }

            // arr1과 arr2가 일치하지 않을 때
            if (arr1[i + j] != arr2[j]) {
                success = false;
                break;
            }
        }

        // 완전히 일치할 경우, arr2는 arr1의 연속부분수열이 맞습니다.
        // 구현의 편의를 위해 return 0으로 프로그램을 강제 종료하였습니다. 
        if (success) {
            cout << "Yes";
            return 0;
        }
    }
     // 완전히 일치하는 경우가 하나도 없을 경우, arr2는 arr1의 연속부분수열이 아닙니다. 
     cout << "No";

    return 0;
}