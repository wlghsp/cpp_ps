#include <iostream>
#define N 2
#define M 4
using namespace std;
/*
배열의 평균: 내 풀이
*/
int main()
{
    freopen("input.txt", "rt", stdin);
    int arr[N][M];
    double total = 0;
    for(int i = 0; i < N; i++) {
        for(int j = 0; j < M; j++) {
            cin >> arr[i][j];
            total += arr[i][j];
        }
    }
    cout << fixed;
    cout.precision(1);
    for(int i = 0; i < N; i++) {
        double sum = 0;
        for(int j = 0; j < M; j++) {
            sum += arr[i][j];
        }
        cout << (sum / M) << " ";
        if(i == N - 1) cout << '\n';
    }
    for(int i = 0; i < M; i++) {
        double sum = 0;
        for(int j = 0; j < N; j++) {
            sum += arr[j][i];
        }
        cout << (sum / N) << " ";
        if(i == M - 1) cout << '\n';
    }
    cout << (total / (N * M));
    return 0;
}