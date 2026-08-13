#include<bits/stdc++.h>
using namespace std;
int main(){
    int n = 67895;
    int sum = 0;
    while(n>0){
        sum += n%10;
        n/= 10;
    }
    cout<<"Sum of digits: "<<sum<<endl;
}