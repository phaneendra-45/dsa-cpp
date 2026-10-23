#include <bits/stdc++.h>
using namespace std;

int main() {
    int n = 4;

    for (int i = n; i >= 1; i--) {
        for (int j = 1; j <= n - i; j++) {
            cout << " ";
        }

        for (int j = 1; j <= 2 * i - 1; j++) {
            if (i == n || j == 1 || j == 2 * i - 1) {
                cout << "*";
            } else {
                cout << " ";
            }
        }

        cout << endl;
    }

    return 0;
}