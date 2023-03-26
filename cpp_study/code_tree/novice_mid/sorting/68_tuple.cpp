#include <iostream>
#include <tuple>
#include <algorithm>
#include <vector>
using namespace std;
/*
국영수 순이지 : 해설 튜플 풀이 
*/


int main() {
  freopen("input.txt", "rt", stdin);
  int n;
  cin >> n;
  vector<tuple<int, int, int, string>> persons;
  for(int i = 0; i < n; i++) {
    string name;
    int kor, eng, math;
    cin >> name >> kor >> eng >> math;
    persons.push_back(make_tuple(-kor, -eng, -math, name));
  }
  sort(persons.begin(), persons.end());
  
  for(auto p: persons) {
    string name;
    int kor, eng, math;
    tie(kor, eng, math, name) = p;
    cout << name << " " << -kor << " " << -eng << " " << -math << '\n';
  }
  return 0;
}