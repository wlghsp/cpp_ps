#include <iostream>

using namespace std;

int CalSalary(int sales)
{
    return (int)(50 + sales * 0.12);
}

int main()
{
    int sales;

    while (1)
    {
        cout << "판매 금액을 만원 단위로 입력(-1 to end): ";
        cin >> sales;
        if (sales == -1)
        {
            break;
        }
        cout << "이번 달 급여: ";
        cout << CalSalary(sales) << "만원"
             << "\n";
    }
    cout << "프로그램을 종료합니다.";
    return 0;
}