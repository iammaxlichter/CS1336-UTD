/*In this program, I will be calculating a refund rate on purchases for a club that is over one-thousand dollars.
the refund rate then is used to calculate the amount a person gets refunded depending on their amount purchased */

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;


int main() {

    //Grabbing the amount that we will be working with
    double amount;
    cout << "Enter the total amount: $ ";
    cin >> amount;

    //creating variables used later
    double refund_percent, refund_amount;

    //this if statement says that if the amount the user entered is more than 1000, the program won't run
    if (amount <1000)
    {
        cout << "Sorry, minimum $1000 is required to qualify for a refund.";
    }

    //this else if statement says that if the amount is greater than or equal to 1000, then this sequence of code will run
    else if (amount >=1000)
    {
         //these four lines are rounding my refund rate down to the tenth
         double refund_rate = (2 + ((amount - 1000) / 10000));
         refund_rate = refund_rate * 10;
         refund_rate = floor(refund_rate);
         refund_rate = refund_rate / 10;

         //If the refund rate is greater than or equal to four, the program hard code's the refund rate to four and then calculates the refund amount and displays the message
         if (refund_rate >= 4.0)
         {
            refund_rate = 4;
            refund_percent = (refund_rate / 100);
            refund_amount = amount * refund_percent;

            cout << fixed << setprecision(1);
            cout << "Your refund rate: " << refund_rate << "%" << endl;
            cout << fixed << setprecision(2);
            cout << "Your refund amount: $" << refund_amount << endl;
         }
        //If the refund rate is less than four, then the program won't have to do any adjusting to the refund rate, and the program will just display this sequence of code
        else
        {
            refund_percent = (refund_rate / 100);
            refund_amount = amount * refund_percent;
            cout << fixed << setprecision(1);
            cout << "Your refund rate: " << refund_rate << "%" << endl;
            cout << fixed << setprecision(2);
            cout << "Your refund amount: $" << refund_amount << endl;
        }
    }


   return 0;
}
