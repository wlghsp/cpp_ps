#include <iostream>
using namespace std;
 int cnt2 = 0, cnt3 = 0, cnt12 = 0;
void check(int i) {
    if(i % 12 == 0) {
        cnt12++;
        return;
    }
    if(i % 3 == 0) {
        cnt3++;
        return;
    }
    if(i % 2 == 0) {
        cnt2++;
        return;
    }

}

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    for(int i = 1; i <= n; i++) {
        check(i);
    }
    cout << cnt2 << " " << cnt3 << " " << cnt12;
    return 0;
}