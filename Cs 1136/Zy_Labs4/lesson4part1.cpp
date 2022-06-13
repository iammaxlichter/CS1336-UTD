/* This program reads the mass of an object (in kg) and output the weight (in N) on the Earth, on the Moon, and on Venus.
if the mass is small or large, the program will display a message saying so, and if the user inputs zero, the program also
prompts the user with a statement */

#include <iostream>
#include <iomanip>
using namespace std;


int main() {

    //lines 13-15 create and initialize variables used later and line 16 creates variables, but does not initialize them
    const double earthAcceleration = 9.81;
	const double moonAcceleration = 1.62;
	const double venusAcceleration = 8.87;
    double earthWeight, moonWeight, venusWeight, Kilograms;

    //lines 19-21 get the input for mass in kilograms
    cout << fixed << setprecision(4);
    cout << "Enter the mass in kg" << endl;
    cin >> Kilograms;

    //This statement states that if the kilograms entered prior are greater than zero, the follow sequence of code will run, otherwise refer to the code under the else statement
    if (Kilograms > 0)
    {
        //Statements displaying kilograms and title for the follow variables
		cout << "The mass is " << Kilograms << " kg" << endl;
        cout << left << setw(12) << "Location"  <<   "Weight (N)" << endl;

                //lines 31-33 initializes the variables created on line 16 with each respective variable
                earthWeight = Kilograms * earthAcceleration;
				moonWeight = Kilograms * moonAcceleration;
				venusWeight = Kilograms * venusAcceleration;

                //lines 36-38 output the actual weights in newtons
                cout << "Earth" << right << setw(17) << earthWeight << endl;
				cout << "Moon" << setw(18) << moonWeight << endl;
				cout << "Venus" << setw(17) << venusWeight << endl;

				/* This whole if else sequence states that if the weight of newtons in Earth weight is greater than 1500, the code under the statement will run, otherwise look
				at the code under the else if statement */
                if (earthWeight>= 1500)
                {
                    cout<<"The object is heavy" << endl;
                }
                else if (earthWeight<= 5)
                {
                    cout<<"The object is light" << endl;
                }

    }

    else
    {
        cout << "The mass is " << Kilograms << " kg" << endl;
        cout << "The mass must be greater than zero" << endl;
    }

}

