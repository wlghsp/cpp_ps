#include<iostream>

using namespace std;

#define MAX_LEN 20


// 문자열의 길이를 인자로 받고 
// 길이가 6이상 9이하이면 true 반환하고
// 그렇지 않다면 false를 반환하는 함수를 만들어보자
bool isPossiblePass(int len) {
    if (len >= 6 && len <= 9)
    {
        return true;
    }
   
    return false;
}


// 문자열의 길이를 반환하는 함수
int getLength(char* str)
{
    int len = 0;
    char * ptr = str; // str의 시작주소를 참조

    while (true)
    {
        if (*ptr == '\0')
        {
            break;
        }
        ptr++; // str의 다음 원소의 주소를 참조한다. 
        len++;
        
        
    }
    return len;
    
}
int main()

{
    int N;
    char str[MAX_LEN+1] = {0, }; //  '\0'으로 배열을 초기화 
    // 1. N을 입력받는다. 
    cin >> N;

    // 2. 문자열을 입력 받는다. 문자열의 길이 최대 20이다. 
   

    // 3. 해당 문자열을 보고, 길이가 6 이상 9이하이면 "yes" 그렇지 않으면 "no"
    while (N--)
    {
        cin >> str;
        if (isPossiblePass(getLength(str))) {
         cout << "yes" << '\n';
        } else {
            cout << "no" << '\n';
        }
        
    }
    
    

    return 0;
}