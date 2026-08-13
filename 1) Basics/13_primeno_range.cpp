#include<bits/stdc++.h>
using namespace std;

bool isPrime(int n){
    if (n < 2) {
        return false;
    }
    for (int i = 2; i < n; i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}
int main (){
    int lower=1,upper=100;
    cout<<"Prime numbers between "<<lower<<" and "<<upper<<" are: ";
    for(int i=lower;i<=upper;i++){
        if(isPrime(i)){
            cout<<i<<" ";
        }
    }


}