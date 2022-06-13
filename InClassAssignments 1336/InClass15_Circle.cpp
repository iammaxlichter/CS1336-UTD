/*This program takes the radius of a circle from the user and runs it
through three different functions ultimately outputting the circumference, diameter, and area */

#include <iostream>
#include <iomanip>

using namespace std;

double Diameter(double); // PT
double Area(double); // PT
double Circum(double); // PT

const double PI = 3.14; //pi constant

//This first function gets the diameter of the circle and returns it back
double Diameter(double radius){
    double dia = radius * 2;
    return dia;
}

//This second function gets the area of the circle and returns it back
double Area(double radius){
    double are = PI * (radius * radius);
    return are;
}

//This third function gets the circumference of the circle and returns it back
double Circum(double radius){
    double cir = 2 * PI * radius;
    return cir;
}

int main () {

    //Getting my radius that I'm running through all my functions
    cout << "Enter the radius of your circle: ";
    double radius;
    cin >> radius;

    //Assigning a variable to each function to make outputting easier
    double di = Diameter(radius);
    double ar = Area(radius);
    double ci = Circum(radius);

    //All of my output statements
    cout << "A circle with a radius of " << radius << " has a...." << endl;
    cout << "Diameter of " << di << endl;
    cout << "Circumference of " << ci << endl;
    cout << "Area of " << ar << endl;
    return 0;
}
