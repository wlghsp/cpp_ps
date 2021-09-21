#include <iostream>
#include <ctime>

using namespace std;


int main() {
    struct tm curr_tm;
    time_t curr_time = time(NULL);

    localtime_r(&curr_time, &curr_tm);

    int year = curr_tm.tm_year + 1900;
    int month = curr_tm.tm_mon + 1;
    int day = curr_tm.tm_mday;

    cout<<year<<"\n";
    cout<<month<<"\n";
    cout<<day;
}