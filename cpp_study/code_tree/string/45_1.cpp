#include <iostream>
#include <string>
using namespace std;
/*
문자열 한 칸씩 밀어내며 뒤집기:
해설 풀이 1
*/
string input_str;
int str_size;
int main()
{
    freopen("input.txt", "rt", stdin);
    int q_num;
    cin >> input_str >> q_num;

    str_size = input_str.size();

    int q_type;

    for(int i = 0; i < q_num; i++) {
        cin >> q_type;
        if(q_type == 1) {
            char front = input_str[0];
            for(int i =1; i < str_size; i++)
                input_str[i-1] = input_str[i];
            input_str[str_size - 1] = front;

            cout << input_str << endl;
        } else if(q_type == 2) {
            char back = input_str[str_size - 1];
            for(int i = str_size -1; i>= 1; i--)
                input_str[i] = input_str[i - 1];
            input_str[0] = back;

            cout << input_str << endl;
        } else {
            char temp;
            for(int i = 0; i < str_size /2; i++) {
                temp = input_str[i];
                input_str[i] = input_str[str_size - i - 1];
                input_str[str_size - i - 1] = temp;
            }
        }
        cout << input_str << endl;
    }

    return 0;
}