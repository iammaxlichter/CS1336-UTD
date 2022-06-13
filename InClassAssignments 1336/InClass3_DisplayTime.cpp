#include <iostream>
#include <iomanip>
using namespace std;
int main() {

    int Input_Seconds;

    cout << "Enter an Integer for seconds: " << endl; //Getting the integer that I'm dividing for
    cin >> Input_Seconds;



    const int Hours = 3600; //Seconds in hour
    const int Minutes = 60; //Minutes in hour
    const int Seconds = 60; //Seconds in minute

    int DisplayHours = Input_Seconds / Hours; //Divide the inputted seconds by 3600. (60 minutes * 60 seconds)
    int DisplayMinutes = Input_Seconds / Minutes % Seconds; //Divide the inputted seconds by the 60 minutes in the hour and get the remaining through modulus
    int DisplaySeconds = Input_Seconds % Seconds; //Modulus the inputed seconds by 60 to get the remaining


    cout << DisplayHours << " hour(s)" << endl; //These next three statements just display everything
    cout << DisplayMinutes << " minute(s)" << endl;
    cout << DisplaySeconds << " second(s)" << endl;


   return 0;
}
