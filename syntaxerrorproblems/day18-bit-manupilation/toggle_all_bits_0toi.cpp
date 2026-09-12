#include <bits/stdc++.h>
using namespace std;

int main() {

    int n = 10;
    int i = 2;

    int mask = (1 << (i + 1)) - 1;

    int result = n ^ mask;

    cout << "Original number = " << n << endl;
    cout << "After toggling bits 0 to " << i
         << " = " << result << endl;

    return 0;
}