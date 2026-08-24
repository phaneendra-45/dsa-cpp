#include<bits/stdc++.h>
using namespace std;
bool isPowerOfTwo(int n) {
if (n == 1) {
    return true;
}
if (n <= 0 || n % 2 != 0) {
    return false;
}
return isPowerOfTwo(n / 2);
}
int main() {
    int n = 1024;
    if (isPowerOfTwo(n)) {
        cout << n << " is a power of 2" << endl;
    } else {
        cout << n << " is not a power of 2" << endl;
    }
    return 0;
}