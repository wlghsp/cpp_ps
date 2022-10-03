#include<iostream>

using namespace std;

#define MAX_SUBJECT 9

int main()
{
    // 1. 만점에 대한 배열을 하나 구성한다. 
    int dest[MAX_SUBJECT] = {100, 100, 200, 200, 300, 300, 400, 400, 500};
    // 2. 학생이 받은 점수를 입력 받는다. 
    int score[MAX_SUBJECT];
    
    int tot = 0;
    bool hacker = false;

    for (int i = 0; i < 9; i++) {
        cin >> score[i];
        if (score[i] > dest[i])
        {
            hacker = true;
            break;
        }

        tot += score[i];
                
    }

    if (hacker)
    {
        cout << "hacker" << endl;
    } else {
        if (tot >= 100)
        {
            cout << "draw"<< endl;
        }
        else 
        {
            cout << "none"<< endl;
        }
        
    }
    

    return 0;
}