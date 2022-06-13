/*Given four values representing counts of quarters, dimes, nickels
 and pennies, output the total amount as dollars and cents. */

#include <iostream>
#include <iomanip>
using namespace std;

int main() {

   //Creating all of the variables we're using
   double dollars;
   int quarters, dimes, nickels, pennies;

    //Getting all the inputs
    cin>>quarters;
    cin>>dimes;
    cin>>nickels;
    cin>>pennies;

    //Calculating the total amount
    dollars = (0.25*quarters) + (0.10*dimes) + (0.05*nickels) + (0.01 * pennies);

    //Displaying the total amount with the appropriate amount
    cout << fixed << setprecision(2);
    cout<<"Amount $" << dollars;


    return 0;
}
