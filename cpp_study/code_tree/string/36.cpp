#include <iostream>
#include <string>
using namespace std;
/*
문자열 놀이
: 내 풀이

문자열 s와 q개의 질의가 주어졌을 때 각 질의를 수행하는 프로그램을 작성해보세요.
단, 질의를 순서대로 수행해야 하며, 문자열은 질의에 따라 계속 변합니다. 질의의 종류는 다음과 같습니다.

1 a b

a번째 문자와 b번째 문자를 교환한 뒤 출력합니다.

2 a b

문자 a를 전부 문자 b로 변경한 뒤 출력합니다.

입력 형식
첫 번째 줄에 문자열 s와 질의의 수를 나타내는 q값이 공백을 사이에 두고 주어집니다.

두 번째 줄 부터는 q개의 줄에 걸쳐 질의가 주어집니다. 각 질의는 다음 2개 중 하나의 타입으로 주어집니다.

(1) 1 a b (1 ≤ a, b ≤ n, a

= b)

(2) 2 a b (a, b는 소문자 알파벳)

문제에서 주어지는 모든 문자는 전부 소문자 알파벳이라 가정해도 좋습니다.

1 ≤ 문자열 s의 길이 ≤ 100
1 ≤ q ≤ 100
출력 형식
q개의 질의에 대한 결과를 한 줄에 하나씩 출력합니다.
*/
int main()
{
    freopen("input.txt", "rt", stdin);
    string s;
    int q;
    cin >> s >> q;
    int n;
    for (int i = 0; i < q; i++)
    {
        cin >> n;
        if (n == 1)
        {
            int a, b;
            cin >> a >> b;
            char tmp = s[a - 1];
            s[a - 1] = s[b - 1];
            s[b - 1] = tmp;
        }
        else
        {
            char a, b;
            cin >> a >> b;
            for (int i = 0; i < s.size(); i++)
            {
                if (s[i] == a)
                    s[i] = b;
            }
        }
        cout << s << '\n';
    }

    return 0;
}