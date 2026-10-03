#include <bits/stdc++.h>
using namespace std;

bool isLeapYear(int year) {
    return (year % 400 == 0) || (year % 4 == 0 && year % 100 != 0);
}

string getDayOfWeek1(vector<int>& date) {
    int day = date[0];
    int month = date[1];
    int year = date[2];

    vector<int> daysInMonth = {
        31,28,31,30,31,30,
        31,31,30,31,30,31
    };

    vector<string> weekDays = {
        "Monday","Tuesday","Wednesday",
        "Thursday","Friday","Saturday","Sunday"
    };

    long long totalDays = 0;

    for (int y = 1; y < year; y++) {
        totalDays += isLeapYear(y) ? 366 : 365;
    }

    for (int m = 1; m < month; m++) {
        if (m == 2 && isLeapYear(year))
            totalDays += 29;
        else
            totalDays += daysInMonth[m - 1];
    }

    totalDays += day - 1;

    return weekDays[totalDays % 7];
}

string getDayOfWeek2(vector<int> &date)
{
    int d = date[0];
    int m = date[1];
    int y = date[2];

    static int t[] = {0, 3, 2, 5, 0, 3, 5, 1, 4, 6, 2, 4};

    y -= (m < 3);

    int day = (y + y / 4 - y / 100 + y / 400 + t[m - 1] + d) % 7;

    vector<string> weekDays = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};

    return weekDays[day];
}
int main() {
    vector<int> date = {17, 4, 1435};

    cout << getDayOfWeek1(date) << endl;
     cout << getDayOfWeek2(date);


    return 0;
}
// we can also use Zeller's Congruence algorithm to find the day of the week for a given date.



