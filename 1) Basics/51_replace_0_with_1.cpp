#include <iostream>
using namespace std;

int main()
{
    int a = 102030;   

    int result = 0;
    int place = 1;

    while (a != 0)
    {
        int digit = a % 10;
        if (digit == 0)
        {
            digit = 1;
        }

        result = result + digit * place;

        a = a / 10;
        place = place * 10;
    }

    cout << result;

    return 0;
}