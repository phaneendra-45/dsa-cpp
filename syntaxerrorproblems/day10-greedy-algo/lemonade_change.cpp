#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> bills = {5, 5, 5, 10, 20};

    int five = 0;
    int ten = 0;

    for (int b : bills) {

        if (b == 5) {
            five++;
        }

        else if (b == 10) {

            if (five == 0) {
                cout << "Can give change: No";
                return 0;
            }

            five--;
            ten++;
        }

        else {
            // Bill is 20

            if (ten > 0 && five > 0) {
                ten--;
                five--;
            }

            else if (five >= 3) {
                five -= 3;
            }

            else {
                cout << "Can give change: No";
                return 0;
            }
        }
    }

    cout << "Can give change: Yes";

    return 0;
}