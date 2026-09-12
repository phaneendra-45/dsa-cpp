#include <bits/stdc++.h>
using namespace std;

int main() {

    int n = 8;
    int k = 2;

    int result = n | (1 << (k - 1));

    cout << "Original number = " << n << endl;
    cout << "After setting bit " << k << " = "
         << result << endl;

    return 0;
}