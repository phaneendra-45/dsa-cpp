#include <bits/stdc++.h>
using namespace std;

double getMin(double x, double y) {
    return (x < y) ? x : y;
}

double getAngle(string s) {
    int h = stoi(s.substr(0, 2));
    int m = stoi(s.substr(3, 2));

    h = h % 12;

    double hrAngle = 0.5 * (h * 60 + m);

    double minAngle = 6 * m;

    double angle = fabs(hrAngle - minAngle);

    return getMin(360.0 - angle, angle);
}

int main() {
    string s = "06:00" ;

    cout << fixed << setprecision(3);
    cout << getAngle(s) << endl;

    return 0;
}