#include<bits/stdc++.h>
using namespace std;
int main(){
// Write a C++ program to check whether a number is positive, negative or zero - question 1
int num = 45;
if (num > 0) {
cout << "number is positive.\n";
} else if (num < 0) {
cout << "number is negative.\n";
} else {
cout << "number is zero.\n";
}

// Write a C++ program to check whether a year is a leap year or not - question 2
int year = 2020;
if (year % 400 == 0) {
cout << year << " is a leap year.\n";
} else if (year % 100 == 0) {
cout << year << " is NOT a leap year.\n";
} else if (year % 4 == 0) {
cout << year << " is a leap year.\n";
} else {
cout << year << " is NOT a leap year.\n";
}

//question 3
int n;
cout << "enter a 3 digit number : ";
int num2 = 123; 
int dig1 = num2 % 10;
num2 /= 10;
int dig2 = num2 % 10;
num2 /= 10;
int dig3 = num2 % 10;
int cubeSum = dig1*dig1*dig1 + dig2*dig2*dig2 + dig3*dig3*dig3;
if (cubeSum == n) {
cout << n << " is an Armstrong Number\n";
} else {
cout << n << " is NOT an Armstrong Number\n";
}
return 0;
}
