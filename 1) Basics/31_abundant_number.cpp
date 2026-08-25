#include<bits/stdc++.h>
using namespace std;
int main (){
    int num = 18;
    int sum = 0;
    for (int i = 1; i < num; i++){
        if (num % i == 0){
            sum += i;
        }
    }
    if (sum > num){
        cout << num << " is an abundant number." << endl;
    }
    else{
        cout << num << " is not an abundant number." << endl;
    }
    return 0;
}