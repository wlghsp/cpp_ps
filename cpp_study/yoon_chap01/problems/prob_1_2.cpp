#include <iostream>

using namespace std;

int main()
{
    char name[50];
    char telNum[100];
    cout << "이름: ";
    cin >> name;
    cout << "전화번호: ";
    cin >> telNum;
    cout << "이름: " << name << "\n";
    cout << "전화번호: " << telNum << "\n";
    return 0;
}