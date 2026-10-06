#include <bits/stdc++.h>
using namespace std;

bool divBy11(string &s) {
    
    int n = stoi(s); 
    return n % 11 == 0;
}


int divBy11_even_odd_digit_sum(string &s){
    int n = s.length();
    int oddDigSum = 0, evenDigSum = 0;

    for (int i = 0; i < n; i++){ 
        
        if (i % 2 == 0)
            oddDigSum += (s[i] - '0');
        else
            evenDigSum += (s[i] - '0');
    }
    
   return ((oddDigSum - evenDigSum) % 11 == 0);
}


int main() {
    string s = "76945";

    if (divBy11(s))
        cout << "true" << endl;
    else
        cout << "false" << endl;
 cout << (divBy11_even_odd_digit_sum(s) ? "true" : "false");
    return 0;
}


