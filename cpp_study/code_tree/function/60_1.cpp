#include <iostream>
using namespace std;
/*
코드네임 : 해설 풀이 1
*/

#define MAX_N 5



class User {
  public:
    char code_name;
    int score;

    User(char code_name, int score) {
      this->code_name = code_name;
      this->score = score;
    }
    User() {}
};

User users[MAX_N];

int main() {
  freopen("input.txt", "rt", stdin);
  // 변수 선언 및 입력
  for(int i=0; i < MAX_N; i++) {
    char code_name;
    int score;
    cin >> code_name >> score;

    // 객체 생성 및 리스트에 추가
    users[i] = User(code_name, score);
  }

  // 최소 점수를 갖는 요원 찾기
  int min_idx = 0;
  for(int i =1; i < MAX_N; i++) {
    if(users[min_idx].score > users[i].score)
      min_idx = i;
  }
  cout << users[min_idx].code_name << " " << users[min_idx].score;
  return 0;
}