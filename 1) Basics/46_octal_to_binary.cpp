#include <iostream>
#include <cmath>
using namespace std;

void convert(int octal)
{
    int i = 0;
    int decimal = 0;

    while (octal != 0)
    {
        int digit = octal % 10;

        decimal += digit * pow(8, i);

        octal /= 10;
        i++;
    }

    cout << "Decimal Value: " << decimal << endl;

    long long binary = 0;
    int rem;
    i = 1;

    while (decimal != 0)
    {
        rem = decimal % 2;
        decimal /= 2;

        binary += rem * i;
        i *= 10;
    }

    cout << "Binary Value: " << binary << endl;
}

int main()
{
    int octal = 420;

    cout << "Octal Value: ";

    convert(octal);

    return 0;
}