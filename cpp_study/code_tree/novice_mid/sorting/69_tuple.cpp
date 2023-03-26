#include <iostream>
#include <tuple>
#include <algorithm>
using namespace std;
/*
정렬 기준이 복잡한 객체 정렬
tuple를 이용한 객체 정렬
*/

using namespace std;

bool cmp(const tuple<int, int, int> &a, const tuple<int, int, int> &b) { // 총 점수 기준 오름차순 정렬
    int kor1, eng1, math1;
    tie(kor1, eng1, math1) = a;
    int kor2, eng2, math2;
    tie(kor2, eng2, math2) = b;
    return kor1 + eng1 + math1 < kor2 + eng2 + math2;
}

int main() {
    tuple<int, int, int> students[5] = {
        make_tuple(90, 80, 90), // 첫 번째 학생
        make_tuple(20, 80, 80), // 두 번째 학생
        make_tuple(90, 30, 60), // 세 번째 학생
        make_tuple(60, 10, 50), // 네 번째 학생
        make_tuple(80, 20, 10), // 다섯 번째 학생 
    };

    sort(students, students + 5, cmp); // 총 점수 기준 오름차순 정렬
  
    for(int i = 0; i < 5; i++) {
        int kor, eng, math;
        tie(kor, eng, math) = students[i];
        cout << kor << " " << eng << " " << math << endl;
    }

    return 0;
}
