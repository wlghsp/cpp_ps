#include <iostream>
#include <utility>
#include <tuple>
using namespace std;
/*
코드네임 : 해설 풀이 2
*/

#define MAX_N 5

// User 목록을 저장할 변수 선언
pair<char, int> users[MAX_N];



int main() {
  freopen("input.txt", "rt", stdin);
  // 변수 선언 및 입력
  for(int i=0; i < MAX_N; i++) {
    char code_name;
    int score;
    cin >> code_name >> score;

    users[i] = make_pair(code_name, score);
  }

  // 최소 점수를 갖는 요원 찾기
  int min_idx = 0;
  for(int i = 1; i < MAX_N; i++) {
     int min_score;
     int curr_user_score;

     tie(ignore, min_score) = users[min_idx];
     tie(ignore, curr_user_score) = users[i];

     if(min_score > curr_user_score)
        min_idx = i;
  }
  char code_name;
  int score;
  tie(code_name, score) = users[min_idx];
  cout << code_name << " " << score;
  return 0;
}