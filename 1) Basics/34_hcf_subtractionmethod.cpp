#include<iostream>
using namespace std;

int main()
{
    int num1 = 36, num2 = 60;
    int a = num1, b = num2;

    while (num1 != num2)
    {
        if (num1 > num2)
            num1 -= num2;
        else
            num2 -= num1;
    }

    cout<<num1;

    return 0;
}