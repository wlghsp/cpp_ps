#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
/*
키를 기준으로 정렬 : 내 풀이
*/

class Person {
  public:
    string name;
    int height, weight;

    Person(string name, int height, int weight) {
      this->name = name;
      this->height = height;
      this->weight = weight;
    }
    Person() {}
};

bool cmp(const Person &a, const Person & b) {
  return a.height < b.height;
}


int main() {
  freopen("input.txt", "rt", stdin);
  int n;
  cin >> n;
  Person persons[n];
  for(int i = 0; i < n; i++) {
    string name;
    int height, weight;
    cin >> name >> height >> weight;
    persons[i] = Person(name, height, weight);
  }
  sort(persons, persons+n, cmp);
  for(auto p: persons) {
    cout << p.name << " " << p.height << " " << p.weight << '\n';
  }
  return 0;
}