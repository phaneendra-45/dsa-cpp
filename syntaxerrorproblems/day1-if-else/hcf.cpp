#include <iostream>
using namespace std;

int main() {
    int a=12, b= 18;
    
    int x = a, y = b;
    while (y != 0) {
        int temp = y;
        y = x % y;
        x = temp;
    }
    cout << "HCF: " << x << endl;
    return 0;
}