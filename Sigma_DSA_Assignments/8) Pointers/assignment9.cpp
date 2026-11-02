/*
question 1
int x;
int *ptr;
x = 7;
ptr = &x;
cout << *ptr;

output : 7

*/

/*
question 2
void multipleBy2(int &a, int &b, int &c)
{
    a *= 2;
    b *= 2;
    c *= 2;
}

int main()
{
    int x = 1, y = 2, z = 3;
    multipleBy2(x, y, z);
    cout << x << " " << y << " " << z;
    return 0;
}

output : 2 4 6


*/

/*

question 3

int a = 32;
int *ptr = &a;

char ch = 'A';
char &cho = ch;

cho += a;
*ptr += ch;
cout << a << " " << ch << endl;
output : 97 65

*/