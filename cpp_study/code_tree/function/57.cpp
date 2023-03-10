#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
/*
007
: 내 풀이
*/

class Spy {
  public:
    string secret;
    string place;
    int time;

    Spy(string secret, string place, int time) {
      this->secret = secret;
      this->place = place;
      this->time = time;
    }
};


int main() {

    freopen("input.txt", "rt", stdin);
    string a, b;
    int t;
    cin >> a >> b >> t;
    Spy spy = Spy(a, b, t);
    cout << "secret code : " << spy.secret << endl;
    cout << "meeting point : " << spy.place << endl;
    cout << "time : " << spy.time;

}