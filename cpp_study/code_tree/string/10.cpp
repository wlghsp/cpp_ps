#include <iostream>
#include <string>
using namespace std;
/*
문자열 역순으로 출력하기: 내 풀이
*/
int main()
{
    freopen("input.txt", "rt", stdin);
    string arr[4];

	for (int i = 0; i < 4; i++) {
		cin >> arr[i];
	}


    for(int i = 3; i >= 0; i--) {
       cout << arr[i] << '\n';
    }
    return 0;
}