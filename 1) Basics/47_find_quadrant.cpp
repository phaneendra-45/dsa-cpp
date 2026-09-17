#include<bits/stdc++.h>
using namespace std;

int main () 
{
  int x=0, y=0;
    if (x > 0 && y > 0) {
 
cout << "point " << x << ", " << y << " lies in the First quadrant\n";
    }
      else if (x < 0 && y > 0) {
cout << "point " << x << ", " << y << " lies in the Second quadrant\n";
  
      }
    else if (x < 0 && y < 0) {
      cout << "point " << x << ", " << y << " lies in the Third quadrant\n";
    }

    else if (x > 0 && y < 0) {
      cout << "point " << x << "," << y << "lies in the Fourth quandrant\n";
    }
    else if (x == 0 && y == 0) {
      cout << "point " << x << ", " << y << " is at the origin\n";
    }

    else if (y == 0 && x != 0) {
    
cout << "point " << x << ", " << y << " on x-axis\n";
    }
    else if (x == 0 && y != 0) {
    
cout << "point " << x << ", " << y << "on at y-axis\n";
    }
  
return 0;
}