#include <iostream>

using namespace std;

int main(void) {
    int N, M;

    cin >> N >> M;

    long long sum = 0;
    int input;

    for (int i = 0; i < N; i++)
    {
        cin >> input;
        sum += input;
    }

    for (int i = 0; i < M; i++)
    {
        cin >> input;
        sum += input;
    }

    cout << sum << "\n";
    
}