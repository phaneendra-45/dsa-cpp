#include <bits/stdc++.h>
using namespace std;

int main() {
    int n = 4;
    int num = n * n;

    for (int i = 1; i <= n; i++) {
        num = (n - i) * n + 1;

        for (int j = 1; j <= n; j++) {
            cout << num;
            num++;

            if (j < n) {
                cout << "*";
            }
        }
        cout << endl;
    }

    return 0;
}