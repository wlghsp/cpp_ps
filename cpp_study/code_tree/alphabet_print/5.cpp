#include <iostream>

using namespace std;

int main()
{
    // 변수 선언 및 입력
    int m;
    cin >> m;
    for(int i =0; i < m; i++) {
        int n;
        cin >> n;
        int cnt = 0;
        while (n != 1)
        {
            if (n % 2 == 0) n /= 2;
            else n = n * 3 + 1;
            cnt++;
        }
        cout << cnt << '\n';
        
    }
    return 0;
}