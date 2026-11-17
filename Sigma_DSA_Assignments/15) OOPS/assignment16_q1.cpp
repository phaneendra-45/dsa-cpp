
#include <iostream>
using namespace std;

class Complex {
    int real, imag;

public:
    Complex(int r, int i) {
        real = r;
        imag = i;
    }
    Complex operator-(Complex c) {
        Complex temp(0, 0);

        temp.real = real - c.real;
        temp.imag = imag - c.imag;

        return temp;
    }
    void display() {
        cout << real << " + (" << imag << ")i" << endl;
    }
};

int main() {
    Complex c1(10, 8);
    Complex c2(4, 3);

    Complex c3 = c1 - c2;

    cout << "First Complex Number: ";
    c1.display();

    cout << "Second Complex Number: ";
    c2.display();

    cout << "Subtraction Result: ";
    c3.display();

    return 0;
}
