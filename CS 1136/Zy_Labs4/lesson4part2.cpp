/* This program takes an input of seconds and output the corresponding days, hours, minutes, and remaining seconds of the number you inputted */

#include <iostream>
#include <iomanip>
using namespace std;


int main() {

    //lines 11-14 creates and initializes variables used later
    const int HoursInDay = 24;
    const int MinsInHour = 60;
    const int SecondsInHour = 3600;
    const int SecondsInMinute = 60;

    //lines 16-21 gets the total seconds inputted that will be translated later
    long long int InputSeconds;
    cout << "Enter seconds" << endl;
    cin >> InputSeconds;
    cout << "Total seconds: " << InputSeconds << endl;
    cout << "" << endl;

    //this first if else sequence reads that if you inputted a number less than or equal to zero, the program won't precede, otherwise the else statement runs
    if (InputSeconds <= 0)
    {
        cout << "Total seconds must be greater than zero" << endl;
    }

    else
    {

        //lines 33-36 creates the equations used to find the corresponding days, hours, minutes, and seconds
        double DisplaySeconds = InputSeconds % SecondsInMinute;
        double DisplayMinutes = InputSeconds / SecondsInMinute % MinsInHour;
        double DisplayDays = InputSeconds / SecondsInMinute / MinsInHour / HoursInDay;
        double  DisplayHours = (InputSeconds / SecondsInHour) - (DisplayDays * HoursInDay);

        /* The rest of these if else statements (lines 39-73) say that if there is enough inputted seconds, display the days, hours, minutes and seconds, but if there is
        not enough seconds to get to one day/hour/minute/seconds, then display nothing. */
        if (DisplayDays <= 0)
        {
        }
        else
        {
            cout << DisplayDays << " day(s)" << endl;
        }


         if (DisplayHours <= 0)
        {
        }
        else
        {
            cout << DisplayHours << " hour(s)" << endl;
        }


         if (DisplayMinutes <= 0)
        {
        }
        else
        {
            cout << DisplayMinutes << " minute(s)" << endl;
        }


        if (DisplaySeconds <= 0)
        {

        }
        else
        {
            cout << DisplaySeconds << " second(s)" << endl;
        }


    }










   return 0;
}
