#include <bits/stdc++.h>
using namespace std;

bool isPrime(int num)
{
    if (num < 2)
        return false;

    for (int i = 2; i * i <= num; i++)
    {
        if (num % i == 0)
            return false;
    }

    return true;
}

// Naive Approach
vector<int> superPrimes(int n)
{
    vector<int> primes;
    vector<int> res;

    for (int i = 2; i <= n; i++)
    {
        if (isPrime(i))
            primes.push_back(i);
    }

    for (int i = 0; i < primes.size(); i++)
    {
        if (isPrime(i + 1))
            res.push_back(primes[i]);
    }

    return res;
}

// Better Approach - Sieve of Eratosthenes
void sieveOfEratosthenes(int n, bool isPrime[])
{

    isPrime[0] = isPrime[1] = false;
    for (int i = 2; i <= n; i++)
        isPrime[i] = true;

    for (int p = 2; p * p <= n; p++)
    {

        if (isPrime[p] == true)
        {

            for (int i = p * 2; i <= n; i += p)
                isPrime[i] = false;
        }
    }
}

vector<int> superPrimesSieve(int n)
{
    vector<int> res;
    bool isPrime[n + 1];
    sieveOfEratosthenes(n, isPrime);

    int primes[n + 1], j = 0;
    for (int p = 2; p <= n; p++)
        if (isPrime[p])
            primes[j++] = p;

    for (int k = 0; k < j; k++)
        if (isPrime[k + 1])
            res.push_back(primes[k]);

    return res;
}

int main()
{
    int n = 20;

    // Naive Approach
    vector<int> ans = superPrimes(n);

    cout << "Naive Approach: [";
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i];
        if (i != ans.size() - 1)
            cout << ", ";
    }
    cout << "]" << endl;

    // Better Approach
    vector<int> ans2 = superPrimesSieve(n);

    cout << "Better Approach: [";
    for (int i = 0; i < ans2.size(); i++)
    {
        cout << ans2[i];
        if (i != ans2.size() - 1)
            cout << ", ";
    }
    cout << "]" << endl;

    return 0;
}