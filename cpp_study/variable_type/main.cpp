#include<iostream>
#include<typeinfo>

using namespace std;


int main() 
{
    int i = 0;
    float f = 0.0f;
    double d = 0.0f;
    char c = 'a';

    cout << typeid(i).name() << endl;
    cout << typeid(f).name() << endl;
    cout << typeid(d).name() << endl;
    cout << typeid(c).name() << endl;

    return 0;
}