#include <iostream>
using namespace std;

int main() {
    int n= 17;

    if (n < 0)
        n = -n;  

    for (; n > 1; n -= 2) {
    }

    if (n == 0)
        cout << "Even" << endl;
    else
        cout << "Odd" << endl;

    return 0;
}