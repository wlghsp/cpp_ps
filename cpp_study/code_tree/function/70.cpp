#include <iostream>
#include <tuple>
#include <algorithm>
using namespace std;
/*
총점 비교 : 내 풀이
*/

using namespace std;

class Person {
  public:
    string name;
    int kor, eng, math;

    Person(string name, int kor, int eng, int math) {
      this->name = name;
      this->kor = kor;
      this->eng = eng;
      this->math = math;
    }
    Person() {}
};

bool cmp(const Person &a, const Person & b) {
  return a.kor + a.eng + a.math < b.kor + b.eng + b.math;
}


int main() {
  freopen("input.txt", "rt", stdin);
  int n;
  cin >> n;
  Person persons[n];
  for(int i = 0; i < n; i++) {
    string name;
    int kor, eng, math;
    cin >> name >> kor >> eng >> math;
    persons[i] = Person(name, kor, eng, math);
  }
  sort(persons, persons+n, cmp);
  for(auto p: persons) {
    cout << p.name << " " << p.kor << " " << p.eng << " " << p.math << '\n';
  }
  return 0;
}