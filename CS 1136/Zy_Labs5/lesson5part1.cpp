/* In this program I will be calculating the number of seconds it takes for sound to travel through a medium. */

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;


int main() {

    cout << fixed << setprecision(4); //Setting decimal places to four

    //These three variables are the speeds we are dividing by
    const double AirSpeed = 1100;
    const double WaterSpeed = 4900;
    const double SteelSpeed = 16400;

    //These three lines is getting the input for the menu and assigning that input to code
    unsigned int choice;
    cout << "Select the medium that sound is traveling through:\n1 Air\n2 Water\n3 Steel" << endl;
    cin >> choice;

    //Using the number we just got, we implement that into a switch statement
    switch(choice)
    {
        //if the user types in "1", this following sequence of code will run
        case 1:

            {
            /*These four lines assign a number inputted to the variable distance. We then use that distance variable
            and divide it by the constants from the start of the program. We then assign that value to a variable called AirMedium */
            double distance;
            cout <<"Enter distance (in feet)" << endl;
            cin >> distance;
            double AirMedium = distance / AirSpeed;


            //This if statement says that if the distance typed previously is less than or equal to zero, the message will output
            if (distance <= 0)
                {
                    cout << "The distance must be greater than zero" << endl;
                }
            //This if else statement says that if the distance is greater than zero, it will run the following code, displaying the time traveled
            else
                {
                    cout << "Air: " << distance << " ft" << endl;
                    cout << "Traveled for " << AirMedium << " seconds" << endl;
                }

            }
            break;

        //if the user types in "2", this following sequence of code will run
        case 2:

            {
            /*These four lines assign a number inputted to the variable distance. We then use that distance variable
            and divide it by the constants from the start of the program. We then assign that value to a variable called WaterMedium */
            double distance;
            cout <<"Enter distance (in feet)" << endl;
            cin >> distance;
            double WaterMedium = distance / WaterSpeed;

            //This if statement says that if the distance typed previously is less than or equal to zero, the message will output
            if (distance <= 0)
                {
                    cout << "The distance must be greater than zero" << endl;
                }

            //This if else statement says that if the distance is greater than zero, it will run the following code, displaying the time traveled
            else if (distance > 0)
                {
                    cout << "Water: " << distance << " ft" << endl;
                    cout << "Traveled for " << WaterMedium << " seconds" << endl;
                }

            }
            break;

        //if the user types in "3", this following sequence of code will run
        case 3:

            {
            /*These four lines assign a number inputted to the variable distance. We then use that distance variable
            and divide it by the constants from the start of the program. We then assign that value to a variable called SteelMedium */
            double distance;
            cout <<"Enter distance (in feet)" << endl;
            cin >> distance;
            double SteelMedium = distance / SteelSpeed;

            //This if statement says that if the distance typed previously is less than or equal to zero, the message will output
            if (distance <= 0)
                {
                    cout << "The distance must be greater than zero" << endl;
                }

            //This if else statement says that if the distance is greater than zero, it will run the following code, displaying the time traveled
            else if (distance > 0)
                {
                    cout << "Steel: " << distance << " ft" << endl;
                    cout << "Traveled for " << SteelMedium << " seconds" << endl;
                }

            }
            break;

        //This default statement determines that if the user types anything other than the cases listed above, this message will display
        default:
            cout << "The menu value is invalid. Please run the program again." << endl;
    }



   return 0;
}
