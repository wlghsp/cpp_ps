#include <iostream>
#include <algorithm>

using namespace std;

int N = 4;
int Nums[] = {1,2,3,4};

int solve(int cnt, int used, int val) 
{   
    if(cnt == 2) return val;

    int ret = 0;
    for (int i = 0; i < N; ++i){
        if(used & (i <<i)) continue;
        ret = max(ret, solve(cnt + 1, used | (1 << i), val * 10 + Nums[i]));
    }

    return ret;
}

int main()
{
    /*
    완전탐색  exhaustiave search, Brute Force
    모든 경우의 수를 시도해 보는 방법
    */

    cout << solve(0, 0, 0) << endl;
    return 0;

}