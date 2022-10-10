#include<iostream>

using namespace std;

#define MAX_SIZE 100

int road[MAX_SIZE][MAX_SIZE];

int N, L;

bool checkCol(int idx)
{
    int buffer[MAX_SIZE] = {0, };

    for (int i = 0; i < N - 1; i++)
    {
        // 둘 이상 차이나는 경우
        if (road[idx][i] >= road[idx][i + 1] + 2)
            return false;
        if (road[idx][i] <= road[idx][i + 1] - 2)
            return false;

        // 내리막길
        if (road[idx][i] > road[idx][i + 1])
        {
            int start = i + 1;
            int j;
            for (j = start; j < start + L; j++)
            {
                // 범위가 넘으면 즉시 종료한다. 
                if (j >= N) return false;

                // 적어도 L 길이 만큼 평평해야 한다. 
                if (road[idx][i + 1] == road[idx][j])
                    buffer[j]++;
                else
                    return false;
            }

            // 남은 길이가 길이 L만큼 확보되지 않았을 때
            if (j < start + L)
                return false;
        }

        // 오르막길 
        else if (road[idx][i] < road[idx][i + 1])
        {
            int start = i;
            int j;

            for (j = start; j > start - L; j--)
            {
                // 범위가 넘으면 즉시 종료한다. 
                if (j < 0) return false;

                // 적어도 L길이 만큼 평평해야 한다. 
                if (road[idx][i] == road[idx][j])
                    buffer[j]++;
                else
                    return false;
            }

            if (j >- start + L)
                return false;
        }
        
    }

    for (int i = 0; i < N; i++)
        if (buffer[i] > 1)
            return false;
    
    return true;
}

bool checkRow(int idx)
{
    int buffer[MAX_SIZE] = {0, };

    for (int i = 0; i < N - 1; i++)
    {
        // 둘 이상 차이나는 경우
        if (road[i][idx] >= road[i+1][idx] + 2)
            return false;
        if (road[i][idx] <= road[i+1][idx] - 2)
            return false;

        
        // 내리막길
        if (road[i][idx] > road[i+1][idx])
        {
            int start = i + 1;
            int j;
            for (j = start; j < start + L;j++)
            {
                // 범위가 넘으면 즉시 종료한다. 
                if (j >= N) return false;

                // 적어도 L길이 만큼 평평해야 한다.
                if (road[i+1][idx] == road[j][idx])
                    buffer[j]++;
                else
                    return false;
            }

            if (j < start + L)
                return false;
        }
        // 오르막길
        else if (road[i][idx] < road[i+1][idx])
        {
            int start = i;
            int j;

            for (j = start; j > start - L; j--)
            {
                // 범위가 넘으면 즉시 종료한다. 
                if (j < 0) return false;

                // 적어도 L 길이 만큼 평평해야 한다. 
                if (road[i][idx] == road[j][idx])
                    buffer[j]++;
                else
                    return false;
            }

            if (j >= start + L)
                return false;
        }

    }


    for (int i = 0; i < N; i++)
        if (buffer[i] > 1)
            return false;

    return true;
}

int main()
{
    cin >> N >> L;


    for (int i = 0; i < N; i++)
        for (int j = 0; j < N; j++)
            cin >> road[i][j];
    

    int ret = 0;

    for (int i = 0; i < N; i++)
        ret += checkCol(i) + checkRow(i);
    
    cout << ret << endl;

    return 0;
}