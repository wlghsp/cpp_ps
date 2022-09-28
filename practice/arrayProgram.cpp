#include<iostream>

using namespace std;


int main() 
{ 
    int score[5];

    cout << "다음은 5개의 성적입니다. >>" << endl;


    for (int i = 0; i < 5; i++)
    {
        cin >> score[i];
    }
    
    int n;
    while (true)
    {
        cout << "찾을 성적을 입력하세요: ";
        cin >> n;

        if (n == -1)
        {
            cout << "종료합니다." << endl;
            break;
        }

        else
        {
            bool flag = false;

            for (int i = 0; i < 5; i++)
            {
                if (score[i] == n)
                {
                    flag = true;
                    cout << "성적 " << n << "은(는) " << i << "번 방에 있습니다" << endl;
                    break;
                }
                
            }
            
            if (flag = false)
            {
                cout << "성적 " << n << "은(는) 없습니다." << endl;
            }
            
        }
            
    }
    
    return 0;
    

    
}