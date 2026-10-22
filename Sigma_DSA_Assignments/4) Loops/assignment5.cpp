#include<bits/stdc++.h>
using namespace std;
int main (){
    // first question
int n = 6;
int fact = 1;
for(int i=1; i<=n; i++) {
fact *= i;
}
cout << "factorial of " << n << " = " << fact << "\n";

// second question
int n2 = 8;
for(int i=1; i<=10; i++) {
cout << (n2 * i) << " ";
}
cout << endl;

// third question
int n3 = 371;
int num = n3;
int cubeSum = 0;
while(num > 0) {
int lastDig = num % 10;
cubeSum += lastDig * lastDig * lastDig;
num /= 10;
}
if(n3 == cubeSum) {
    cout << "Armstrong number\n";
} else {
cout << "NOT an Armstrong number\n";
}

// fourth question

int N = 15;
for(int i=2; i<=N; i++) {
int curr = i; //current number to check for
bool isPrime = true;
for(int j=2; j*j<=i; j++) {
if(curr % j == 0) {
isPrime = false;
}
}
if(isPrime) {
cout << curr << " ";
}
}
cout << endl;


// fifth question
int n5 = 10;
int first = 0, sec = 1;
cout << first << " " << sec << " ";
for(int i=2; i<n5; i++) {
int third = first + sec;
cout << third << " ";
first = sec;
sec = third;
}
cout << "\n";
return 0;
}