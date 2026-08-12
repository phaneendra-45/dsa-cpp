#include<bits/stdc++.h>
using namespace std;
int main(){
    int n =19;
    int count=0;
    if (n==0 && n==1){
        cout<<"Neither prime nor composite";
    }
    else{
    for (int i=1; i<n+1; i++){
        if (n%i==0){
            count++;
        }
    }
    if (count==2){
        cout<<"Prime number";
    }
    else{
        cout<<"Not a prime number";
    }
    return 0;
}
}