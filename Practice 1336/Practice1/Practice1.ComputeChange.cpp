/*This program computes the amount of change the user enters up to twenty dollar
bills and down to pennies */

#include <iostream>
#include <iomanip>
using namespace std;
int main() {

    //Getting the user to enter the amount we are converting
    double Amount;
    cout << "Enter an amount to change: ";
    cin >> Amount;

    //These four statements are just math and logic to get these values
    int Twenties = Amount / 20;
    int Tens = (Amount - (Twenties * 20)) / 10;
    int Fives = ((Amount - (Twenties * 20) - (Tens * 10)) / 5);
    int Ones = ((Amount - (Twenties * 20) - (Tens * 10) - (Fives * 5)) / 1);

    //To get the cents, we needed to create these two variables to get rid of the decimal
    int Change = (100 * Amount);
    int LastAmount = Change % 100;

    //These four statements are very similar to how we got the dollar values. Using math and logic
    int Quarters = LastAmount / 25;
    int Dimes = (LastAmount - (Quarters * 25)) / 10;
    int Nickels = (LastAmount - (Quarters * 25) - (Dimes * 10)) /5;
    int Pennies = (LastAmount - (Quarters * 25) - (Dimes * 10) - (Nickels * 5) / 1);

    //Displaying all of the change one by one
    cout << Twenties << " Twenty dollar bill(s)" << endl;
    cout << Tens << " Ten dollar bill(s)" << endl;
    cout << Fives << " Five dollar bill(s)" << endl;
    cout << Ones << " One dollar bill(s)" << endl;
    cout << Quarters << " Quarter(s)" << endl;
    cout << Dimes << " Dime(s)" << endl;
    cout << Nickels << " Nickel(s)" << endl;
    cout << Pennies << " Penny / Pennies" << endl;


    return 0;
}

/*Output 1- Enter an amount to change: .54
0 Twenty dollar bill(s)
0 Ten dollar bill(s)
0 Five dollar bill(s)
0 One dollar bill(s)
2 Quarter(s)
0 Dime(s)
0 Nickel(s)
4 Penny / Pennies*/

/*Output 2-Enter an amount to change: 42.24
2 Twenty dollar bill(s)
0 Ten dollar bill(s)
0 Five dollar bill(s)
2 One dollar bill(s)
0 Quarter(s)
2 Dime(s)
0 Nickel(s)
4 Penny / Pennies*/

/*Output 3- Enter an amount to change: 99.99
4 Twenty dollar bill(s)
1 Ten dollar bill(s)
1 Five dollar bill(s)
4 One dollar bill(s)
3 Quarter(s)
2 Dime(s)
0 Nickel(s)
3 Penny / Pennies*/

/*Output 4- Enter an amount to change: 584358.32
29217 Twenty dollar bill(s)
1 Ten dollar bill(s)
1 Five dollar bill(s)
3 One dollar bill(s)
1 Quarter(s)
0 Dime(s)
1 Nickel(s)
1 Penny / Pennies*/
