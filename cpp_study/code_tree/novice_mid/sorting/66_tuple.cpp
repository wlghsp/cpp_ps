#include <iostream>
#include <string>
#include <algorithm>
#include <tuple>
using namespace std;
/*
키를 기준으로 정렬 : 해설 튜플 풀이
*/


int main() {
  freopen("input.txt", "rt", stdin);
  int n;
  cin >> n;
  tuple<int, int, string> persons[n]; 
  for(int i = 0; i < n; i++) {
    string name;
    int height, weight;
    cin >> name >> height >> weight;
    persons[i] = make_tuple(height, weight, name);
  }
  sort(persons, persons+n);

  for(auto p: persons) {
    string name;
    int h, w;
    tie(h, w, name) = p;
    cout << name << " " << h << " " << w << '\n';
  }
  
  return 0;
}