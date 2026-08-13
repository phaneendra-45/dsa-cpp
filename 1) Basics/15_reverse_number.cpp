#include<bits/stdc++.h>
using namespace std;
int main(){
    int n =46289;
    int rev = 0;
    while(n>0){
        int rem =n%10;
        rev = rev*10+rem;
        n /= 10;
    }
    cout<<"Reversed number: "<<rev<<endl;
}