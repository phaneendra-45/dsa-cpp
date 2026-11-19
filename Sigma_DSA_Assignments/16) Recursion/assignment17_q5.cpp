#include <bits/stdc++.h>
using namespace std;
const int MOD = 1e9 + 7;

long long power(long long a, long long b)
{
    if (b == 0)
        return 1;
    long long half_power = power(a, b / 2);
    if (b % 2 == 0)
        return half_power * half_power % MOD;
    else
        return half_power * half_power % MOD * (a % MOD) % MOD;
}
int countGoodNumbers(long long n)
{
    long long ed;
    long long od;
    if (n & 1)
    {
        od = n / 2;
        ed = (n + 1) / 2;
    }
    else
    {
        od = n / 2;
        ed = n / 2;
    }
    return ((power(5, ed) % MOD) * (power(4, od) % MOD)) % MOD;
}

int main()
{
    long long n = 50;
    cout << countGoodNumbers(n) << endl;
    return 0;
}