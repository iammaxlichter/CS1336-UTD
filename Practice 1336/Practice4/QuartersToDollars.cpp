/*This program takes the input of a user's quarters and returns the amount in dollar value */

#include <iomanip>
#include <iostream>
#include <cmath>

using namespace std;

double quartersToDollars(int); // PT

//This function takes the quarters that the user enters them and multiplies them by their cent value and returns that value
double quartersToDollars(int quarter){
    double dollarEquiv = quarter * .25;
    return dollarEquiv;
}

main(){

    //Getting that quarter value that is passed into the function
    double Answer;
    cout << "Enter Quarters: ";
    cin >> Answer;

    //Getting the function to a variable for easier output and then outputting the total amount in dollars
    double Total = quartersToDollars(Answer);
    cout << "The value of " << Answer << setprecision(2) << fixed <<  " quarters is $" << Total;

}

/*Output 1 -
Enter Quarters: 34
The value of 34 quarters is $8.5 */

/*Output 2 -
Enter Quarters: .1
The value of 0.1 quarters is $0.00*/

/*Output 3 -
Enter Quarters: 1234567
The value of 1.23457e+006 quarters is $308641.75 */

/*Output 4 -
Enter Quarters: 4444
The value of 4444 quarters is $1111.00 */
