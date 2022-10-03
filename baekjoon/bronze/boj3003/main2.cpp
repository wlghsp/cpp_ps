#include<iostream>

using namespace std;


#define BOARD_SIZE 6
int main() 
{
    // 1. 원래 있어야 할 각 피스의 갯수를 담은 배열을 하나 만든다. <--- 문제를 깔끔하게 풀 수 있는 포인트

    int answer[BOARD_SIZE] = {1,1,2,2,2,8};

    // 2. 동현이가 가진 각 피스를 입력 받는다. 
    int board[BOARD_SIZE]  = {0, };

    for (int i = 0; i < BOARD_SIZE; i++)
    {
        cin >> board[i];
    }

    // 3.각각 원래 있어야 할 피스와 동혁이가 가진 피스의 차를 출력한다.
    // A B C D E

    cout << answer[0] - board[0];

    for (int i = 1; i < BOARD_SIZE; i++)
    {
        cout << " "  << answer[i] - board[i];
    }
    cout << endl;

    return 0;
}