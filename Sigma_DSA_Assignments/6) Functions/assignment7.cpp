#include<bits/stdc++.h>
using namespace std;

// question 1 palindrome check
int reverse(int n) {
int res = 0;
while(n > 0) {
int lastDig = n % 10;
res = res*10 + lastDig;
n = n/10;
}
return res;
}
bool isPalindrome(int num) {
int revNum = reverse(num);
return num == revNum;
}

//question 2 sum of digits
int digSum(int n) {
int res = 0;
while(n > 0) {
res += n % 10;
n = n/10;
}
return res;
}

//question 3 sum of squares of a and b
int abSquare(int a, int b) {
return a*a + b*b + 2*a*b;
}

//question 4 largest of 3 numbers
int largest(int a, int b, int c) {
if(a >= b && a >= c) {
return a;
} else if(b >= c) {
return b;
} else {
return c;
}
}

//question 5 next character
char getNextChar(char ch) {
if(ch == 'z') {
return 'a';
} else {
return ch + 1;
}
}

int main(){
    reverse(1331);
    int first= isPalindrome(1331);
    int second = digSum(3456);
    int third = abSquare(2,3);
    int fourth = largest(5,9,4);
    char fifth = getNextChar('o');

    cout<< first <<endl;
    cout<< second <<endl;
    cout<< third <<endl;
    cout<< fourth <<endl;
    cout<< fifth <<endl;

}