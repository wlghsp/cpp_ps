#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
/*
객체 생성 및 값 변경
class를 통한 값 변경
*/

class Student {
  public:
    int kor, eng, math;

    Student(int kor = 0, int eng = 0, int math = 0) {
      this->kor = kor;
      this->eng = eng;
      this->math = math;
    }
};


int main() {
  Student student1 = Student();
  
  cout << student1.kor << endl;  // 90
  cout << student1.eng << endl;  // 80
  cout << student1.math << endl; // 90
}