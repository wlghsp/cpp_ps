#include <iostream>

using namespace std;

#define MAX_SIZE 50

int room[MAX_SIZE][MAX_SIZE];

struct Axis
{
    int r;
    int c;
};

Axis roomconditioner[2];

int R, C, T;
int dx[4] = {-1, 1, 0, 0};
int dy[4] = {0, 0, -1, 1};

bool isValidIndex(int i, int j)
{
    if (i < 0 || i >= R)
        return false;
    if (j < 0 || j >= C)
        return false;

    return true;
}

void movedust()
{
    int buf[MAX_SIZE][MAX_SIZE] = {
        0,
    };

    for (int i = 0; i < R; i++)
        for (int j = 0; j < C; j++)
        {
            if (room[i][j] == -1)
                continue;

            int dustCnt = 0;
            for (int k = 0; k < 4; k++)
            {
                int cr = i + dx[k];
                int cc = j + dy[k];

                // 인덱스 체크
                if (isValidIndex(cr, cc) == false)
                    continue;

                // 공기청정기는 건들지 않는다.
                if (room[cr][cc] == -1)
                    continue;

                buf[cr][cc] += room[i][j] / 5;
                dustCnt++;
            }
            buf[i][j] -= (((room[i][j] / 5) * dustCnt));
        }

    for (int i = 0; i < R; i++)
        for (int j = 0; j < C; j++)
        {
            if (room[i][j] == -1)
                continue;
            room[i][j] += buf[i][j];
        }
}

void doclean()
{
    // * 첫번째 공기 청정기

    // case1. 위에서 아래로
    for (int i = roomconditioner[0].r - 1; i >= 1; i--)
    {
        int cr = i;
        int cc = 0;
        room[cr][cc] = room[cr - 1][cc];
    }

    // case2. 오른쪽에서 왼쪽으로
    for (int i = 0; i < C - 1; i++)
    {
        int cr = 0;
        int cc = i;
        room[cr][cc] = room[cr][cc + 1];
    }

    // case3. 아래에서 위쪽
    for (int i = 0; i <= roomconditioner[0].r - 1; i++)
    {
        int cr = i;
        int cc = C - 1;
        room[cr][cc] = room[cr + 1][cc];
    }

    // case4. 왼쪽에서 오른쪽
    for (int i = C - 1; i >= 1; i--)
    {
        int cr = roomconditioner[0].r;
        int cc = i;
        room[cr][cc] = room[cr][cc - 1];
    }

    // 공기청정기의 바람 추가
    room[roomconditioner[0].r][roomconditioner[0].c + 1] = 0;

    // * 두번째 공기 청정기

    // 아래에서 위로
    for (int i = roomconditioner[1].r + 1; i < R - 1; i++)
    {
        int cr = i;
        int cc = 0;
        room[cr][cc] = room[cr + 1][cc];
    }

    // 오른쪽에서 왼쪽으로
    for (int i = 0; i < C - 1; i++)
    {
        int cr = R - 1;
        int cc = i;

        room[cr][cc] = room[cr][cc + 1];
    }

    // 위에서 아래로
    for (int i = R - 1; i >= roomconditioner[1].r; i--)
    {
        int cr = i;
        int cc = C - 1;
        room[cr][cc] = room[cr - 1][cc];
    }

    // 왼쪽에서 오른쪽으로
    for (int i = C - 1; i >= 1; i--)
    {
        int cr = roomconditioner[1].r;
        int cc = i;

        room[cr][cc] = room[cr][cc - 1];
    }

    room[roomconditioner[1].r][roomconditioner[1].c + 1] = 0;
}

int getTot()
{
    int ret = 0;

    for (int i = 0; i < R; i++)
        for (int j = 0; j < C; j++)
            if (room[i][j] != -1)
                ret += room[i][j];

    return ret;
}

int main()
{
    cin >> R >> C >> T;

    int idx = 0;

    for (int i = 0; i < R; i++)
    {
        for (int j = 0; j < C; j++)
        {
            cin >> room[i][j];

            if (room[i][j] == -1)
            {
                roomconditioner[idx].r = i;
                roomconditioner[idx].c = j;
                idx++;
            }
        }
    }

    while (T--)
    {
        movedust();
        doclean();
    }

    cout << getTot() << endl;

    return 0;
}