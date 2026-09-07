#include<iostream>
using namespace std;
 
void convertBinary(int num)
{
    
    int binaryArray[32];
 
    int i = 0;
    while (num > 0) {
 
        binaryArray[i] = num % 2;
        num = num / 2;
        i++;
    }
 
    for (int j = i - 1; j >= 0; j--)
        cout << binaryArray[j];
}
 
int main()
{
    int n = 21;
    convertBinary(n);
    return 0;
}