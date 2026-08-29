#include<bits/stdc++.h>
using namespace std;

int main()
{
    int num1 = 12, num2 = 14, hcf;

    // calculating LCM here
    for(int i = 1; i <= num1 || i <= num2; i++) {
        if(num1%i == 0 && num2%i == 0 )
            hcf = i;
        }

    // LCM formula
    int lcm = (num1*num2)/hcf;

    cout<<"LCM of "<<num1<<" and "<<num2<<" is "<<lcm;

    return 0;
}