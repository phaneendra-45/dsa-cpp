#include <iostream>
using namespace std;

int digitalRoot(int n)
{
    int res = 0;
    while (n > 0 || res > 9)
    {

        if (n == 0)
        {
            n = res;
            res = 0;
        }

        res += n % 10;
        n /= 10;
    }

    return res;
}

int main()
{
    int n = 99999;

    cout << digitalRoot(n);

    return 0;
}

// We can also use n % 9 to find the digital root of a number. If n is 0, then the digital root is 0. If n is not 0, then the digital root is n % 9.