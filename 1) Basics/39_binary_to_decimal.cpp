#include<bits/stdc++.h>
using namespace std;

int getDecimal(long long num)
{
    int i = 0, decimal= 0;
    
    
    while (num!=0)
    {
        int digit = num % 10;
        decimal += digit * pow(2,i);

        num /= 10;
        i++;
    }
    return decimal;
}


int main()
{
    
    long long binary = 11011;
    
    cout << getDecimal(binary);   
    
    return 0;
}

//we can use format stoi(binary_in_string_format, 0, base_value)