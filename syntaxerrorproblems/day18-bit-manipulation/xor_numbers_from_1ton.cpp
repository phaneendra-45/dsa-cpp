#include <bits/stdc++.h>
using namespace std;

int main() {
    int n = 10;

    int result;

    if (n % 4 == 0)
        result = n;
    else if (n % 4 == 1)
        result = 1;
    else if (n % 4 == 2)
        result = n + 1;
    else
        result = 0;

    cout << "XOR from 1 to " << n
         << " = " << result << endl;

    return 0;
}