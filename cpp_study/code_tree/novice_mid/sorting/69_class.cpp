#include <iostream>
#include <tuple>
#include <algorithm>
using namespace std;
/*
정렬 기준이 복잡한 객체 정렬
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

bool cmp(Student a, Student b) { // 총 점수 기준 오름차순 정렬
    return a.kor + a.eng + a.math < b.kor + b.eng + b.math; 
}

int main() {
    Student students[5] = {
        Student(90, 80, 90), // 첫 번째 학생
        Student(20, 80, 80), // 두 번째 학생
        Student(90, 30, 60), // 세 번째 학생
        Student(60, 10, 50), // 네 번째 학생
        Student(80, 20, 10)  // 다섯 번째 학생 
    };

    sort(students, students + 5, cmp); // 국어 점수 기준 오름차순 정렬

    for(int i = 0; i < 5; i++)
        cout << students[i].kor << " " << students[i].eng << " " << students[i].math << endl;

    return 0;
}

