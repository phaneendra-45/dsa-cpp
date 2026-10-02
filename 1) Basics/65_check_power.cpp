#include <iostream>
#include <cmath>
using namespace std;

bool isPower(int x, int y)
{
    if (x == 1)
        return y == 1;

    if (y == 1)
        return true;

    double res = log(y) / log(x);
    

    return fabs(res - round(res)) < 1e-10;
}

int main()
{

    cout << boolalpha;
    cout << isPower(10, 1) << endl;
    cout << isPower(1, 20) << endl;
    cout << isPower(2, 128) << endl;
    cout << isPower(2, 30) << endl;

    return 0;
}

//we can also use repeat multiplication to check if y is a power of x.
bool isPowerIterative(int x, int y)
{
    if (x == 1)
        return y == 1;

    if (y == 1)
        return true;

    long long current = x;
    while (current < y)
    {
        current *= x;
    }

    return current == y;
}