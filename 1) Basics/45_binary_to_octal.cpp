#include <iostream>
#include <cmath>
using namespace std;

void convert(long long num)
{
    int octalDigit = 0;
    int count = 1;
    int i = 0;
    int pos = 0;

    int octalArray[32] = {0};

    while (num != 0)
    {
        int digit = num % 10;

        octalDigit += digit * pow(2, i);

        i++;
        num /= 10;

        octalArray[pos] = octalDigit;

        if (count % 3 == 0)
        {
            octalDigit = 0;
            i = 0;
            pos++;
        }

        count++;
    }

    for (int j = pos; j >= 0; j--)
    {
        cout << octalArray[j];
    }
}

int main()
{
    long long binary = 1010101; 

    

    cout << "Octal number: ";
    convert(binary);

    return 0;
}