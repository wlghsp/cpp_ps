#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
/*
폭탄 해제 : 내 풀이
*/

class Bomb {
  public:
    string code;
    char color;
    int second;

    Bomb(string code, char color, int second) {
      this->code = code;
      this->color = color;
      this->second = second;
    }
};


int main() {
  freopen("input.txt", "rt", stdin);
  string code;
  char color;
  int second;
  cin >> code >> color >> second;
  Bomb bomb = Bomb(code, color, second);
  cout << "code : " << bomb.code << '\n'; 
  cout << "color : " << bomb.color << '\n'; 
  cout << "second : " << bomb.second << '\n'; 

  return 0;
}