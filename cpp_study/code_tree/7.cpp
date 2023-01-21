#include <iostream>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 2 - i; j++) {
			cout << " ";
		}
		for (int j = 0; j < 2 * i + 1; j++) {
			cout << "*";
		}
		cout << endl;
	}

    return 0;
}