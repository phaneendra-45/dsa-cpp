#include <bits/stdc++.h>
using namespace std;

int main() {

    int a = 10;
    int b = 20;

    cout << "Before swapping:" << endl;
    cout << "a = " << a << ", b = " << b << endl;

    a ^= b;
    b ^= a;
    a ^= b;

    cout << "After swapping:" << endl;
    cout << "a = " << a << ", b = " << b << endl;

    return 0;
}