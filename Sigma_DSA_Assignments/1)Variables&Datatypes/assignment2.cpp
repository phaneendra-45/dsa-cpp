#include<bits/stdc++.h>
using namespace std;
 
//assignment question1
int areaofsquare(int side) {
    int area = side * side;
    return area;
}

//assignment question2
float totalcost(float pencilcost, float penCost, float eraserCost) {
   float totalcost = pencilcost + penCost + eraserCost;
    return totalcost;
}

//assignment question3
float simpleinterest(float p, float r, float t) {
   float  SI = (p * r * t) / 100;
    return SI;
}
 
//assignment question4
float areaofcircle(float radius) {
    float area = 3.14 * radius * radius;
    return area;
}

int main() {
    cout << "Area of square: " << areaofsquare(5) << endl;
    cout << "Total cost: " << totalcost(10.5, 20.0, 15.75) << endl;
    cout << "Simple interest: " << simpleinterest(1000, 5, 2) << endl;
    cout << "Area of circle: " << areaofcircle(5.0) << endl;
    return 0;
}