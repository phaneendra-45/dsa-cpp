#include<bits/stdc++.h>
using namespace std;
int main()
{
int num = 1234321,rev=0,rem,temp;
temp = num;

while(temp!=0){
rem = temp%10;
rev = rev*10 + rem;
temp /= 10;
}
if(rev==num){
    cout << "The number is a palindrome." << endl;
}
else{
    cout << "The number is not a palindrome." << endl;
}
}