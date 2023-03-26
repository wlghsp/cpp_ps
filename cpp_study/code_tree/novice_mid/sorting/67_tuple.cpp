#include <iostream>
#include <tuple>
#include <algorithm>
using namespace std;
/*
여러 우선순위를 갖는 객체 정렬
tuple을 이용한 객체 정렬
*/

int main() {
  
  // 국어점수 오름차순,  국어점수가 같다면 영어점수 내림차순 정렬
  tuple<int, int, int> students[5] = {
      make_tuple(90, -80, 90),  // 첫 번째 학생
      make_tuple(20, -80, 80),  // 두 번째 학생
      make_tuple(90, -30, 60),  // 세 번째 학생
      make_tuple(60, -10, 50),  // 네 번째 학생
      make_tuple(80, -20, 10),  // 다섯 번째 학생
  };
  
  sort(students, students + 5);  // 국어 점수 기준 오름차순 정렬

  for(int i = 0; i < 5; i++) {
    int kor, eng, math;
    tie(kor, eng, math) = students[i];
    cout << kor << " " << -eng << " " << math << endl;
  }
  
  return 0;
}