#include <bits/stdc++.h>
using namespace std;

int main() {

    int n = 13;
    int k = 2;

    int result = n ^ (1 << (k - 1));

    cout << "Original number = " << n << endl;
    cout << "After toggling bit " << k << " = "
         << result << endl;

    return 0;
}