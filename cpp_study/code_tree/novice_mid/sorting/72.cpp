#include <iostream>
#include <tuple>
#include <algorithm>
using namespace std;
/*
개인정보 : 내 풀이
*/
#define MAX_N 5

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

bool cmp_name(const Person &a, const Person & b) {
  return a.name < b.name;
}

bool cmp_height(const Person &a, const Person & b) {
  return a.height < b.height;
}


int main() {
  freopen("input.txt", "rt", stdin);
  Person persons[MAX_N];
  for(int i = 0; i < MAX_N; i++) {
    string name;
    int h;
    double w;
    cin >> name >> h >> w;
    persons[i] = Person(name, -h, w);
  }
  sort(persons, persons + MAX_N, cmp_name);
  cout << "name" << '\n';
  cout << fixed;
  cout.precision(1);
  for(auto p: persons) {
    cout << p.name << " " << -p.height << " " << p.weight << '\n';
  }
  cout << '\n';
  sort(persons, persons + MAX_N, cmp_height);
  cout << "height" << '\n';
  for(auto p: persons) {
    cout << p.name << " " << -p.height << " " << p.weight << '\n';
  }
  return 0;
}