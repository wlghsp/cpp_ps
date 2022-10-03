#include<iostream>

using namespace std;

int main()

{
    int N;
    cin >> N;

    for (int i = 0; i < N; i++)
    {
        string str;
        cin >> str;
        int len = str.length();
        if (len >= 6 && len <= 9)
        {
            cout << "yes" << '\n';
        }
        else {
            cout << "no" << '\n';
        }
        

    }

    return 0;
    
}