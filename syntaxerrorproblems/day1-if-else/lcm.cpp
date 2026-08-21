#include <iostream>
using namespace std;

int main() {
    int a = 12, b = 18;
    int x = a, y = b;
    while (y != 0) {
        int temp = y;
        y = x % y;
        x = temp;
    }
    int hcf = x;
    int lcm = (a * b) / hcf;
    cout << "LCM: " << lcm << endl;
    return 0;
}