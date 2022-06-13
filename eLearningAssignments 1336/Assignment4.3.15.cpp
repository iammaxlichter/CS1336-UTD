/*In this program I will be calculating the the amount of vacation days employees for a company get depending on the years of service they work */

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {

    //Getting the number for the years of service
    int years;
    cout << "Enter # of years of service: ";
    cin >> years;

    int vacation = 10; //hard coding the default number 10 because that's what the program calls for.

    //These conjunctions of if and else if statements just say that if the input matches anyone of these conditions, the code underneath will run
    if (years == 0)
    {
        cout << "# of vacation days: " << vacation << endl;
    }
    else if (years == 1)
    {
        cout << "# of vacation days: " << vacation << endl;
    }
    else if (years == 2)
    {
        cout << "# of vacation days: " << vacation << endl;
    }

    /*If the years are greater than or equal to 3 and the years are less than or equal to six, a while loop will run that says
    if the input doesn't equal to 2, vacation is going to be added to by 2 and the years are going to subtract by one. this loop will
    run until the years is equal to 2 */
    else if ((years >= 3) && (years <=6))
    {
        vacation = 13;
        while (years !=2)
            {
                vacation = vacation + 2;
                years = years - 1;
            }
        cout << "# of vacation days: " << vacation << endl;
    }

    /*If the years are greater than or equal to seven, a while loop will run that says if the input doesn't equal
     to 6, vacation is going to be added by one and the years are going to be subtracted by 1 until the years equals
     6, which will then break the loop */
    else if (years >= 7)
        {
        vacation = 21;

        while (years != 6)
            {
                vacation++;
                years = years-1;
            }
        cout << "# of vacation days: " << vacation<< endl;
        }


   return 0;
}
