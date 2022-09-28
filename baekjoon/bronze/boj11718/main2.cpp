#include<iostream>

using namespace std;


int main()
{   string str;
    //for문으로도 while(true)와 같이 쓸 수 있다. 

    for(;;) {
        getline(cin, str);
        if (str == "") break;
        cout << str << endl;
    }

    return 0;
}