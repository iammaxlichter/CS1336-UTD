/*This program displays the length, perimeter, area, and width of a rectangle depending on user input*/

#include <iomanip>
#include <iostream>
#include <cmath>

using namespace std;

void Rectangle(double,double,double&,double&); // PT
void displayData(); // PT

//This function gets the area and the perimeter
void Rectangle(double length, double width, double &area, double &perimeter){
    area = width * length;
    perimeter = (length * 2) + (width * 2);
}

//This function uses the length and width and displays everything (area, length, width, and perimeter)
void displayData(){

    //Creating all my variables
    double length, width, area, perimeter;

    //Getting my length from user
    cout << "Enter the rectangle's length: ";
    cin >> length;

    //Getting my width from user
    cout << "Enter the rectangle's Width: ";
    cin >> width;

    //Running the function with previously inputted numbers as parameters
    Rectangle(length, width, area, perimeter);

    //Setting the decimal place to two and displaying everything (area, length, width, and perimeter)
    cout << setprecision(2) << fixed;
    cout << "Length = " << length << endl;
    cout << "Width = " << width << endl;
    cout << "Area = " << area << endl;
    cout << "Perimeter = " << perimeter << endl;
}

//Running the data
main(){
    displayData();
}

/*Output 1 -
Enter the rectangle's length: 20
Enter the rectangle's Width: 30
Length = 20.00
Width = 30.00
Area = 600.00
Perimeter = 100.00*/

/*Output 2 -
Enter the rectangle's length: 123
Enter the rectangle's Width: 23
Length = 123.00
Width = 23.00
Area = 2829.00
Perimeter = 292.00*/

/*Output 3 -
Enter the rectangle's length: 345
Enter the rectangle's Width: 43
Length = 345.00
Width = 43.00
Area = 14835.00
Perimeter = 776.00*/

/*Output 4 -
Enter the rectangle's length: 23.4
Enter the rectangle's Width: 34.3
Length = 23.40
Width = 34.30
Area = 802.62
Perimeter = 115.40*/
