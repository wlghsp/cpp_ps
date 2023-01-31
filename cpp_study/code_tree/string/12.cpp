#include <iostream>
#include <string>
using namespace std;
/*
문자열 길이의 합: 내 풀이
*/
int main()
{
    freopen("input.txt", "rt", stdin);
    int n;
    cin >> n;
    string arr[n];
    int total = 0;
    int cnt = 0;
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
        total += arr[i].length();
        if(arr[i][0] == 'a') cnt++;
	}
    cout << total << " " << cnt;
    return 0;
}