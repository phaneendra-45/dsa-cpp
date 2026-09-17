#include<iostream>
using namespace std;
    
int factorial(int num)
{
    int fact=1;
    for(int i=num; i>=1 ;i--)
        fact*=i;
    return fact;
}
    
int main()
{
    int n=7, r=3;
    int p = factorial(n)/factorial(n-r);

    cout << "Total possible arrangements: " << p << endl;

    return 0;
}