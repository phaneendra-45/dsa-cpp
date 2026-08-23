#include<bits/stdc++.h>
using namespace std;    
int main(){
    int n=234567;
    int count=0;
    while(n>0){
        n=n/10;
        count++;
    }
    cout<<count<<endl;
    return 0;
}