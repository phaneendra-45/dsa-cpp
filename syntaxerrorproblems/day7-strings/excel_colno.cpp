#include <bits/stdc++.h>
using namespace std;

int main() {
    string column = "PD";

    int result = 0;

    for (char ch : column) {
        result = result * 26 + (ch - 'A' + 1);
    }

    cout << "Column Number: " << result;

    return 0;
}