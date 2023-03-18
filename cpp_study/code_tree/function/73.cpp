#include <iostream>
#include <tuple>
#include <algorithm>
using namespace std;
/*
키, 몸무게를 기준으로 정렬
: 내 풀이
*/

class Person {
  public:
    string name;
    int height;
    double weight;


    Person(string name, int height, double weight) {
      this->name = name;
      this->height = height;
      this->weight = weight;
    }
    Person() {}
};

bool cmp(const Person &a, const Person & b) {
  return make_tuple(a.height, -a.weight) < make_tuple(b.height, -b.weight); 
}


int main() {
  freopen("input.txt", "rt", stdin);
  int n;
  cin >> n;
  Person persons[n];
  for(int i = 0; i < n; i++) {
    string name;
    int h;
    double w;
    cin >> name >> h >> w;
    persons[i] = Person(name, h, w);
  }
  sort(persons, persons + n, cmp);
  for(auto p: persons) {
    cout << p.name << " " << p.height << " " << p.weight << '\n';
  }

  return 0;
}