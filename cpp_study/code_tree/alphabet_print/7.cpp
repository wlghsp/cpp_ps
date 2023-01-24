#include <iostream>

using namespace std;
int cnt = 0;
bool countDivisors(int n) {
    int ans = 1;
    for(int i= 1; i < n/2 + 1; i++) {
        if(n % i == 0) ans++;
    }
    return ans == 3;
}

int main()
{
    // 변수 선언 및 입력
    int start, end;
    cin >> start >> end;
    
    for(int i = start; i <= end; i++) {
        if(countDivisors(i)) cnt++;
    }
    cout << cnt;
    return 0;
}