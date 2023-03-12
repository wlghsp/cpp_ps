#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
/*
코드네임 : 내 풀이
*/

class Agent {
  public:
    char code_name;
    int score;

    Agent(char code_name = '\0', int score = 0) {
      this->code_name = code_name;
      this->score = score;
    }
};


int main() {
  freopen("input.txt", "rt", stdin);
  Agent agents[5];
  int minVal = 101;
  int minIdx = -1;
  for(int i = 0; i< 5; i++) {
    char name;
    int score;
    cin >> name >> score;
    if(score < minVal){
      minVal = score;
      minIdx = i;
    } 
    agents[i] = Agent(name, score);
  }
  cout << agents[minIdx].code_name << " " << agents[minIdx].score;
}