#include <iostream>
#include <tuple>
#include <algorithm>
using namespace std;
/*
줄 세우기 : 내 풀이
*/

using namespace std;

class Person {
  public:
    int height, weight, number;

    Person(int height, int weight, int number) {
      this->height = height;
      this->weight = weight;
      this->number = number;
    }
    Person() {}
};

bool cmp(const Person &a, const Person & b) {
  return make_tuple(-a.height, -a.weight, a.number) <  make_tuple(-b.height, -b.weight, b.number);
}


int main() {
  freopen("input.txt", "rt", stdin);
  int n;
  cin >> n;
  Person persons[n];
  for(int i = 0; i < n; i++) {
    int h, w;
    cin >> h >> w;
    persons[i] = Person(h, w, i+1);
  }
  sort(persons, persons+n, cmp);
  for(auto p: persons) {
    cout << p.height << " " << p.weight << " " << p.number << '\n';
  }
  return 0;
}