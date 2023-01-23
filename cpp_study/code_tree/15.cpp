#include <iostream>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
		if (i % 2 == 0) {
			cout << "*";
		}
		else {
            for (int j = 0; j < 2 * ((i+1)/ 2); j++) {
				cout << "* ";
			}
		}
		cout << endl;
	}

    return 0;
}