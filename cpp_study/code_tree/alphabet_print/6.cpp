#include <iostream>

using namespace std;
int cnt = 0;
bool checkPerfect(int n) {
    int sum_val = 0;
    for(int i= 1; i < n/2 + 1; i++) {
        if(n % i == 0) sum_val += i;
    }
    return sum_val == n;
}

int main()
{
    // 변수 선언 및 입력
    int start, end;
    cin >> start >> end;
    
    for(int i = start; i <= end; i++) {
        if(checkPerfect(i)) cnt++;
    }
    cout << cnt;
    return 0;
}