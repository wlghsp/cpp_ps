#include <iostream>
#include <algorithm>
using namespace std;
/*
줄 세우기 2
: 내 풀이
*/

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

bool cmp(const Person &a, const Person &b) {
  if(a.height != b.height)
    return a.height < b.height;
  return a.weight < b.weight;
}

int main() {
  freopen("input.txt", "rt", stdin);
  int n;
  cin >> n;
  Person persons[n];
  for(int i = 0; i < n; i++) {
    int h, w;
    cin >> h >> w;
    persons[i] = Person(h, -w, i+1);
  }
  sort(persons, persons + n, cmp);
  for(int i = 0; i < n; i++)
    cout << persons[i].height << " " << -persons[i].weight << " " << persons[i].number << '\n';

  return 0;
}