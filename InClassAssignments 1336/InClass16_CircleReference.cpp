/* In this program I will be displaying the area, circumference, and diameter of a circle using reference
variables in my parameter of the function. */

#include <iostream>
#include <iomanip>
using namespace std;

const double PI = 3.14; // Pi variable

//This function uses references in the parameter to make it easier to display the area, circumference, and diameter
void Circle(double Radius, int &Diameter, double &Area, double &Circumference){

   Diameter = 2 * Radius;
   Area = PI * (Radius * Radius);
   Circumference = 2 * PI * Radius;

}

int main()
{
    //Initializing all my variables uses in the parameters of the function
    int Radius, Diameter;
    double Area, Circumference;

    //Getting the radius of the circle to calculate everything
    cout <<" Enter a whole number radius.... ";
    cin >> Radius;

    Circle(Radius,Diameter,Area,Circumference); //Run the function to store the values into each respected variable

    //Displaying all my equations calculated
    cout << "Diameter is: " << Diameter << endl;
    cout << "Area is: " << Area << endl;
    cout << "Circumference is: " << Circumference << endl;
    return 0;
}
