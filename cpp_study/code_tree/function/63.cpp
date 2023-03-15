#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
/*
사는 지역 : 내 풀이
*/

class Person {
  public:
    string name;
    string code;
    string area;

    Person(string name, string code, string area) {
      this->name = name;
      this->code = code;
      this->area = area;
    }
    Person() {}
};


int main() {
  freopen("input.txt", "rt", stdin);
  int n;
  cin >> n;
  int maxIdx = 0;
  string big_name;
  Person persons[n];
  for(int i = 0; i < n; i++) {
    string name, area;
    string code;
    cin >> name >> code >> area;
    if(i == 0) big_name = name;
    else {
      if(name.compare(big_name) > 0) {
        big_name = name;
        maxIdx = i;
      } 
    }
    persons[i] = Person(name, code, area);
  }

  cout << "name " << persons[maxIdx].name << '\n'; 
  cout << "addr " << persons[maxIdx].code << '\n'; 
  cout << "city " << persons[maxIdx].area << '\n'; 
  
  return 0;
}