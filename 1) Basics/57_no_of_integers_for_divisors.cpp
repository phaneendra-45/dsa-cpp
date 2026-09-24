#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int n=7, x=2;
    
    int count = 0;
    
    for(int i=1; i<=n; i++){
        
        int count_factors = 0;
        for(int j = 1; j<=sqrt(i); j++){
            if(i%j==0){
                if(i/j != j)
                    count_factors += 2;
                else
                    count_factors++;
            }
        }
        
        if(count_factors == x)
            count++;
    }
    
    cout<<count;
}