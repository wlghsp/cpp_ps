#include <iostream>
#include <string>
using namespace std;
/*
Next Level
: 내 풀이
*/

class User {
  public:
    string id;
    int level;

    User(string id = "", int level = 0) {
      this->id = id;
      this->level = level;
    }
};


int main() {
    freopen("input.txt", "rt", stdin);
    string i;
    int l;
    cin >> i >> l;
    User user1 = User();
    user1.id = "codetree";
    user1.level = 10;
    User user2 = User();
    user2.id = i;
    user2.level = l;

    cout << "user " << user1.id << " lv " << user1.level << '\n';
    cout << "user " << user2.id << " lv " << user2.level << '\n';

}