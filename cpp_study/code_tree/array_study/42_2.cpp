#include <iostream>
using namespace std;

#define MAX_N 1000 // 입력값 N의 최대값
#define MAX_NUM 1000 // 원소의 최댓값
/*
 중복되지 않는 숫자 중 최대
 유일할 때만 최대 갱신
*/
int main()
{
    freopen("input.txt", "rt", stdin);
    int n , nums[MAX_N];
    int count[MAX_NUM + 1] = {};

    // 입력
    cin >> n;
    for(int i = 0; i < n; i++) cin >> nums[i];

    // step1. count 배열에 수의 등장 빈도를 셉니다. 
    for(int i = 0; i < n; i++) count[nums[i]]++;

    // step2. 큰 수부터 체크하며 한 번 등장한 최대의 값을 찾습니다. 
    int answer = -1;
    for(int max_candidate = MAX_NUM; max_candidate >= 0; max_candidate--) {
        if(count[max_candidate] == 1) {
            answer = max_candidate;
            break;
        }
    }
    cout << answer;
    return 0;
}