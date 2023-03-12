#include <iostream>
#include <string>
#include <tuple>
using namespace std;
/*
객체 생성 및 값 변경
tuple을 통한 값 변경
*/


int main() {
  tuple<int, int, int> student1 = make_tuple(90, 80, 90);
  int kor, eng, math;
  tie(kor, eng, math) = student1;
  cout << kor << " " << eng << " " << math; // 90 80 90
}