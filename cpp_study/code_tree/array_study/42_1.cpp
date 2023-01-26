#include <iostream>
using namespace std;

#define MAX_N 1000 // 입력값 N의 최대값

/*
 중복되지 않는 숫자 중 최대
 유일할 때만 최대 갱신
*/
int main()
{
    freopen("input.txt", "rt", stdin);
    int n , nums[MAX_N];

    // 입력
    cin >> n;
    for(int i = 0; i < n; i++) cin >> nums[i];

    // 최대값 찾기
    int max = -1;  // 못 찾는 경우  max = -1이 출력됩니다. 
    for(int i = 0; i < n; i++) {
        int curr_num = nums[i];
        // 최대가 될 수 있는 후보입니다. 
        if(max < curr_num) {
            // 갱신할 수 있는지 확인하기 위해 이 숫자의 등장 빈도를 셉니다. 
            int count = 0;
            for(int j = 0; j < n; j++) {
                if(nums[j] == curr_num) {
                    count++;
                }
            }
            // 이 숫자가 배열에서 유일할 때만 갱신합니다. 
            if(count == 1) max = curr_num;
        }
    }
    cout << max;

    return 0;
}