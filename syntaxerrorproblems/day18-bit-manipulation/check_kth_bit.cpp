#include <bits/stdc++.h>
using namespace std;

int main() {

    int n = 13;
    int k = 3;

    if ((n >> (k - 1)) & 1)
        cout << "K-th bit is SET" << endl;
    else
        cout << "K-th bit is NOT SET" << endl;

    return 0;
}