#include <bits/stdc++.h>
using namespace std;

int main() {

    int n = 29;

    int count = 0;

    while (n) {
        n &= (n - 1);
        count++;
    }

    cout << "Number of set bits = " << count << endl;

    return 0;
}