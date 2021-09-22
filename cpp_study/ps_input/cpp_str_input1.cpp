#include <iostream>
#include <cstdio>
#include <string>
using namespace std;

int main()
{
    int testCase;
    scanf("%d", &testCase);
    while (testCase--)
    {
        int n;
        int t;
        string str;
        cin >> n >> str;
        for (int i = 0; i < str.size(); i++)
        {
            for (int j = 0; j < n; j++)
            {
                printf("%c", str[i]);
            }
        }
        printf("\n");
    }

    return 0;
}