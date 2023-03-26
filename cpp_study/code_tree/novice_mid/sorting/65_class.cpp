#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
/*
객체 정렬 학습
class를 이용한 객체 정렬  
*/

class Student {
  public:
    int kor, eng, math;

    Student(int kor, int eng, int math) {
      this->kor = kor;
      this->eng = eng;
      this->math = math;
    }
};

bool cmp(Student a, Student b) {  // 국어 점수 기준 오름차순 정렬
  return a.kor < b.kor;
}

// 위 보다 아래와 같은 형태로 더 많이 쓰임 
// const로 함수 안에서 해당 변수의 값을 바꾸지 못한다고 강제를 해주는 것, 값을 바꾸면 에러 발생
// & s는 call by reference 로 값을 복사하여 넣기지 않고 주소 자체를 넘기는 방식 
bool cmp1(const Student &a, const Student &b) {  // 국어 점수 기준 오름차순 정렬
  return a.kor < b.kor;
}


int main() {

  Student students[5] = {
    Student(90, 80, 90),  // 첫 번째 학생
    Student(20, 80, 80),  // 두 번째 학생
    Student(90, 30, 60),  // 세 번째 학생
    Student(60, 10, 50),  // 네 번째 학생
    Student(80, 20, 10)  // 다섯 번째 학생
  };
  sort(students, students + 5, cmp1);  // 국어 점수 기준 오름차순 정렬


  for(int i = 0; i < 5; i++)
    cout << students[i].kor << " " << students[i].eng << " " << students[i].math << '\n';
  
  return 0;
}