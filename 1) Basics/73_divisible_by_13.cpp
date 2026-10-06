#include <iostream>
using namespace std;

bool divBy13_modulo_div(string &s) {
    
    int num = stoi(s);
    
    return (num % 13 == 0);
}


bool divBy13_sum_of_3_digit(string &s){
    int len = s.size();

    if (len == 1 && s[0] == '0') {
        return true;
    }

    if (len % 3 == 1) {
        s += "00";  
        len += 2;
    } else if (len % 3 == 2) {
        s += "0";   
        len += 1;
    }

    int sum = 0;   
    int p = 1; 

    for (int i = len - 1; i >= 0; i--) 
    {
        int group = 0;
        group += s[i--] - '0';        
        group += (s[i--] - '0') * 10;  
        group += (s[i] - '0') * 100;   

        sum = sum + group * p;

        p *= -1;
    }

    sum = abs(sum);

    return (sum % 13 == 0);
}

bool divBy13_string_modulo(string& s) {
    int rem = 0;

    for (char ch : s) {
        rem = (rem * 10 + (ch - '0')) % 13;
    }
    
    return rem == 0;
}


int main() {
    string s = "2911285";

    bool isDivisible = divBy13_modulo_div(s);

    if (isDivisible) {
        cout << "true" << endl;
    } else {
        cout << "false" << endl;
    }
  
    if (divBy13_sum_of_3_digit(s))
        cout << "true" << endl;
    else
        cout << "false" << endl;

    if (divBy13_string_modulo(s))
        cout << "true" << endl;
    else
        cout << "false" << endl;

    return 0;
}






