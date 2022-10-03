#include<iostream>

using namespace std;
int N, board[100][100];

void fill(int r, int c) {
    if (r < 0 || r > N - 1 || c <0 || c > N-1) return; // 경계를 벗어나면 재귀 종료
    if (board[r][c] != 0) return; // 경계를 만났거나 이미 마킹했다면 재귀 종료

    board[r][c] = 1;

    fill(r - 1, c); // 위로 
    fill(r + 1, c); // 아래
    fill(r, c - 1); // 왼쪽
    fill(r, c + 1); // 오른쪽

    
}

int main() 
{
    freopen("input1.txt", "rt", stdin);
    cin >> N;

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            cin >> board[i][j];
        }
    }
    int sr, sc;
    cin >> sr >> sc;
    fill(sr, sc);

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            cout << board[i][j] << ' ';
        }
        cout << endl;
        
    }
    
    return 0;
    
}