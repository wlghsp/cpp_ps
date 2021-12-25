#include <bits/stdc++.h>
using namespace std;

int main()
{
    double ret = 2.12345;
    int n = 2;
    // double을 double끼리 나눔
    // double을 int로 나누어도 double이 되나 double형은 double형끼리 연산하고
    // int는 int형끼리 연산함으로써 "맞왜틀"에 빠지지 않도록 한다.
    int a = (int)round(ret / double(n));
    cout << a << "\n";
    return 0;
}