#include <iostream>
#include <string>
using namespace std;
/*
문자열의 총 길이 구하기: 내 풀이
*/
int main()
{
    freopen("input.txt", "rt", stdin);
    int n = 10;
    string arr[n];

	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

    int ans = 0;
    for(int i = 0; i < n; i++) {
       ans += arr[i].length();
    }
    cout << ans;
    return 0;
}