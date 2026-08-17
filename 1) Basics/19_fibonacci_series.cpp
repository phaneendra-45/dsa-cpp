#include<bits/stdc++.h>
using namespace std;
int main(){
    int num = 20;
    int a=0,b=1;
    int nextterm;
    cout<< a << " ";
    for(int i =2;i<num;i++){
        nextterm= a+b;
        a = b;
        b = nextterm;
        cout<< nextterm << " ";
    }
    return 0;
}