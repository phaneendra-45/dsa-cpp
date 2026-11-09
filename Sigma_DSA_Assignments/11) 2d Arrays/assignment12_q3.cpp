#include<bits/stdc++.h>
using namespace std;

int main() {
int row = 2, column = 3;
int matrix[][column] = { {2, 3, 7}, {5, 6, 7} };

int transpose[column][row] = {{0}};
for(int i=0; i<row; i++) {
for (int j=0; j<column; j++) {
transpose[j][i] = matrix[i][j];
}
}
for(int i=0; i<column; i++) {
for (int j=0; j<row; j++) {
cout << transpose[i][j] << " ";
}
cout << endl;
}

}