#include <iostream>
using namespace std;

int gcd(int a, int b)
{
    if (a == 0)
        return b;
    return gcd(b % a, a);
}

int etf1(int n)
{
    int result = 1;
    for (int i = 2; i < n; i++)
        if (gcd(i, n) == 1)
            result++;
    return result;
}



int etf2(int n)
{
    int result = n;

    for (int p = 2; p * p <= n; ++p)
    {
        if (n % p == 0)
        {
            while (n % p == 0)
                n /= p;

            result -= result / p;
        }
    }
    if (n > 1)
        result -= result / n;

    return result;
}

int main()
{
    int n = 11;
    cout << etf1(n) << endl;
    cout << etf2(n) << endl;
    return 0;
}


