/*This program calculates the customers monthly bill with the package they have chosen. */

#include <stdlib.h>
#include <iostream>
#include <iomanip>

using namespace std;
int main() {

    //These are the variables we used in the program later
    char package;
    double charges, Apackage, Bpackage, Cpackage, A_minutes, B_minutes, C_minutes;
    int minutes;

    //These three variables are the base charge for each respective package
    const double A_Charge = 39.99;
    const double B_Charge = 59.99;
    const double C_Charge = 69.99;

    //Setting the decimal points to two
    cout << setprecision(2) << fixed << endl;

    //Reading variables 'package' and 'minutes' into the system in which package is a letter A-C and minutes is any integer
    cout << "Enter the customer's pkg (A,B, or C): ";
    cin >> package;
    cout << "Enter the number of minutes used: ";
    cin >> minutes;

    //This switch statement is ran through the variable package first
    switch (package)
    {
        //If you entered either 'a' or 'A' for package, the following executes
        case 'a':
        case 'A':

            //If the minutes you entered is greater than 450, the following variable is stored into a specified variable
            if (minutes > 450)
                {
                    A_minutes = ((minutes - 450) * .45);
                }
            //The total amount of money that package A delivers is outputted below
            Apackage = A_Charge + A_minutes;
            cout << "The charges are $" << Apackage << endl;


            //If the minutes you entered is greater than 900, the following variable is stored into a specified variable(package B)
            if (minutes > 900)
                {
                    B_minutes = ((minutes-900) * .40);
                }
            /*The total value is stored into a variable(package B) and if the value of package A is greater than package B, the following will run.
            This shows how much you could save if you use the alternative package*/
            Bpackage = B_Charge + B_minutes;
            if (Apackage > Bpackage)
            {
                cout << "With package B you would have saved $" << Apackage - Bpackage << endl;
            }

            /*Similarly to the statements above, the C package is stored into a variable and if the value of package A is
            greater than package C, the following will run*/
            Cpackage = Apackage - C_Charge;
            if (Apackage > Cpackage)
            {
                cout << "With package C you would have saved $" << Cpackage << endl;
            }
            break;


        //If you entered either 'b' or 'B' for package, the following executes
        case 'b':
        case 'B':

            //If the amount of minutes entered is greater than 900, the following value is stored into a specified variable
            if (minutes > 900)
                {
                    B_minutes = ((minutes-900) * .40);
                }
            //This statement calculates the value of the B package and is outputted
            Bpackage = B_Charge + B_minutes;
            cout << "The charges are $" << Bpackage << endl;

            //If the amount of minutes is greater than 450, the following value is stored into a specified variable(package A)
            if (minutes > 450)
                {
                    A_minutes = ((minutes - 450) * .45);
                }
            /*The total value is stored into a variable(package A) and if the value of package B is greater than package A, the following will run.
            This shows how much you could save if you use the alternative package*/
            Apackage = A_Charge + A_minutes;
            if (Bpackage > Apackage)
            {
                cout << "With package A you would have saved $" << Bpackage - Apackage << endl;
            }


            /*Similarly to the statements above, the C package is stored into a variable and if the value of package B is
            greater than package C, the following will run*/
            Cpackage = Bpackage - C_Charge;
            if (Bpackage > Cpackage)
            {
                cout << "With package C you would have saved $" << Cpackage << endl;
            }
        break;


        //If you entered either 'c' or 'C' for package, the following executes
        case 'c':
        case 'C':
            cout << "The charges are $" << C_Charge << endl;
        break;


        //If you don't enter a value that is either A-C, the program will read it off as invalid and prompt you to enter a value A-C
        default :
            cout << "Enter a choice between A to C" << endl;
            break;
    }

  return 0;
}

/*Output 1 - Enter the customer's pkg (A,B, or C): h
Enter the number of minutes used: 34
Enter a choice between A to C*/


/*Output 2 - Enter the customer's pkg (A,B, or C): a
Enter the number of minutes used: 122222
The charges are $54837.39
With package B you would have saved $6248.60
With package C you would have saved $54767.40*/


/*Output 3 - Enter the customer's pkg (A,B, or C): A
Enter the number of minutes used: 1200
The charges are $377.49
With package B you would have saved $197.50
With package C you would have saved $307.50*/


/*Output 4 - Enter the customer's pkg (A,B, or C): B
Enter the number of minutes used: 1400
The charges are $259.99
With package C you would have saved $190.00*/
