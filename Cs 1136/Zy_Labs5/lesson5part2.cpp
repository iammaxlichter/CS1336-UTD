/* In this program I will reading in the number of seconds and then calculating how far sound can
travel in a specified medium in that many seconds */

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;


int main() {

    //These four lines are the constant variables for which we are multiplying with of each element
    const double CarbonSpeed = 258.0;
    const double AirSpeed = 331.5;
    const double HeliumSpeed = 972.0;
    const double HydrogenSpeed = 1270.0;

    //These three lines display the menu and lets the user input what number to type
    unsigned int choice;
    cout << "Select the medium that sound is traveling through:\n1 Carbon Dioxide\n2 Air\n3 Helium\n4 Hydrogen" << endl;
    cin >> choice;

    /* This statement declares that if the user types in "1", the program then asks you to type in a number from 0.000 to 30.000.
    if you type in a number outside of that range, the program will output a statement declaring the range you should've entered.
    If you type in a number inside the range, the program takes that number and multiplies that numbers with associated constant
    variable that was created and initialized at the start of the program (For 1 it would be CarbonSpeed). The program will then
    output that number and stop running */
    if (choice == 1)
        {
            double time;
            cout << "Enter time (in seconds)" << endl;
            cin >> time;
            double CarbonMedium = time * CarbonSpeed;

            if (time < 0)
                {
                    cout << "The time must be between 0.000 and 30.000 (inclusive)" << endl;
                }

            else if (time > 30)
                {
                    cout << "The time must be between 0.000 and 30.000 (inclusive)" << endl;
                }

            else
                {
                    cout << fixed << setprecision(3);
                    cout << "Carbon Dioxide: " << time << " seconds" << endl;
                    cout << fixed << setprecision(4);
                    cout << "Traveled " << CarbonMedium << " meters\n";
                }
        }

        /* This statement declares that if the user types in "2", the program then asks you to type in a number from 0.000 to 30.000.
        if you type in a number outside of that range, the program will output a statement declaring the range you should've entered.
        If you type in a number inside the range, the program takes that number and multiplies that numbers with associated constant
        variable that was created and initialized at the start of the program (For 1 it would be AirSpeed). The program will then
        output that number and stop running */
        else if (choice == 2)
        {
            double time;
            cout << "Enter time (in seconds)" << endl;
            cin >> time;
            double AirMedium = time * AirSpeed;

            if (time < 0)
                {
                    cout << "The time must be between 0.000 and 30.000 (inclusive)" << endl;
                }

            else if (time > 30)
                {
                    cout << "The time must be between 0.000 and 30.000 (inclusive)" << endl;
                }

            else
                {
                    cout << fixed << setprecision(3);
                    cout << "Air: " << time << " seconds" << endl;
                    cout << fixed << setprecision(4);
                    cout << "Traveled " << AirMedium << " meters\n";
                }
        }


        /* This statement declares that if the user types in "3", the program then asks you to type in a number from 0.000 to 30.000.
        if you type in a number outside of that range, the program will output a statement declaring the range you should've entered.
        If you type in a number inside the range, the program takes that number and multiplies that numbers with associated constant
        variable that was created and initialized at the start of the program (For 1 it would be HeliumSpeed). The program will then
        output that number and stop running */
        else if (choice == 3)
        {
            double time;
            cout << "Enter time (in seconds)" << endl;
            cin >> time;
            double HeliumMedium = time * HeliumSpeed;

            if (time < 0)
                {
                    cout << "The time must be between 0.000 and 30.000 (inclusive)" << endl;
                }

            else if (time > 30)
                {
                    cout << "The time must be between 0.000 and 30.000 (inclusive)" << endl;
                }

            else
                {
                    cout << fixed << setprecision(3);
                    cout << "Helium: " << time << " seconds" << endl;
                    cout << fixed << setprecision(4);
                    cout << "Traveled " << HeliumMedium << " meters\n";
                }
        }


        /* This statement declares that if the user types in "4", the program then asks you to type in a number from 0.000 to 30.000.
        if you type in a number outside of that range, the program will output a statement declaring the range you should've entered.
        If you type in a number inside the range, the program takes that number and multiplies that numbers with associated constant
        variable that was created and initialized at the start of the program (For 1 it would be HydrogenSpeed). The program will then
        output that number and stop running */
        else if (choice == 4)
        {
            double time;
            cout << "Enter time (in seconds)" << endl;
            cin >> time;
            double HydrogenMedium = time * HydrogenSpeed;

            if (time < 0)
                {
                    cout << "The time must be between 0.000 and 30.000 (inclusive)" << endl;
                }

            else if (time > 30)
                {
                    cout << "The time must be between 0.000 and 30.000 (inclusive)" << endl;
                }

            else
                {
                    cout << fixed << setprecision(3);
                    cout << "Hydrogen: " << time << " seconds" << endl;
                    cout << fixed << setprecision(4);
                    cout << "Traveled " << HydrogenMedium << " meters\n" ;
                }
        }

        //This two else if statements state that if the user types in a number greater than or equal to zero, or greater than 4, the program won't run
        else if (choice <= 0)
            {
                cout << "The menu value is invalid. Please run the program again." << endl;
            }

        else if (choice > 4)
            {
                cout << "The menu value is invalid. Please run the program again." << endl;
            }

        //There is no need for an else statement because all the conditions have been satisfied


    return 0;
}
