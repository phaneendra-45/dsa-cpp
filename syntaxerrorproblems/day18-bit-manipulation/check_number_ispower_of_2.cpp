#include <bits/stdc++.h>
using namespace std;

int main() {

    int n = 16;

    if (n > 0 && (n & (n - 1)) == 0)
        cout << n << " is a power of 2" << endl;
    else
        cout << n << " is NOT a power of 2" << endl;

    return 0;
}