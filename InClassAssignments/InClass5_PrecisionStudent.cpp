#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double x = 28.45678;
    double y = 42.98;
    double z = 123456.78915;
    double c = 123.4,  d = 12;

    cout << setprecision(6);
    cout << "X is " << x << endl;

    cout << setprecision(4);
    cout << "Y is " << y << endl;


    cout << "With precision 1:" << endl;

    cout << setprecision(1);
    cout << "X is " << x << endl;
    cout << "Y is " << y << endl;


    cout << "With precision 2:" << endl;


    cout << setprecision(2);
    cout << "X is " << x << endl;
    cout << "Y is " << y << endl;


    cout << "With precision 3:" << endl;


    cout << setprecision(3);
    cout << "X is " << x << endl;
    cout << "Y is " << y << endl;


    cout << "With precision 4:" << endl;


    cout << setprecision(4);
    cout << "X is " << x << endl;
    cout << "Y is " << y << endl;


    cout << "With precision 5 and setw(8):" << endl;


    cout << setprecision(5);
    cout << "X is " << setw(8) << x << endl;
    cout << "Y is " << setw(8) << y << endl;
    cout << "Z is " << setw(8) << z << endl;
    cout << endl;

    cout << setprecision(5);
    cout << "C is " << c << endl;
    cout << "D is " << d << endl;


    cout << "With precision 5 :" << endl;


    cout << setprecision(5);
    cout << "C is    " << c << endl;
    cout << "D is       " << d << endl;


    cout << "With precision 5 and showpoint:" << endl;


    cout << showpoint;
    cout << "C is   " << c << endl;
    cout << "D is   " << d << endl;


    cout << "With precision 5 and noshowpoint:" << endl;


    cout << noshowpoint;
    cout << "C is    " << c << endl;
    cout << "D is       " << d << endl;
    cout << endl;


    cout << "With precision 2 fixed and setw(8):" << endl;


    cout << setprecision(2) << fixed;
    cout << "X is " << setw(8) << x << endl;
    cout << "Y is " << setw(8) << y << endl;
    cout << "Z is " << setw(8) << z << endl;
    cout << endl;


    cout << "With precision 5 and showpoint:" << endl;

    cout << setprecision(5);
    cout << showpoint;
    cout << "C is " << c << endl;
    cout << "D is " << d << endl;
    cout << endl;


    cout << "With precision 3 fixed and setw(4) and left justified:" << endl;


    cout << left;
    cout << setprecision(3) << fixed;
    cout << "X is " << setw(4) << x << endl;
    cout << "Y is " << setw(4) << y << endl;
    cout << "Z is " << setw(4) << z << endl;


    cout << "With precision 3 fixed  and left justified:" << endl;

    cout << left;
    cout << setprecision(3) << fixed;
    cout << "X is " << x << endl;
    cout << "Y is " << y << endl;
    cout << "Z is " << z << endl;

    cout << "With precision 3 fixed and right justified:" << endl;

    cout << right;
    cout << setprecision(3) << fixed;
    cout << "X is " << setw(8) << x << endl;
    cout << "Y is " << setw(8) << y << endl;
    cout << "Z is " << z << endl;

}

