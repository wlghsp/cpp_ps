#include <bits/stdc++.h>

using namespace std;

int v[10];

int main()
{
    for (int i = 1; i <= 10; i++)
        v[i - 1] = i;
    for (int a : v)
        cout << a << " ";
    cout << "\n";
}
