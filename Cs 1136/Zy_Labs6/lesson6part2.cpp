/* In this program I will be displaying the Fahrenheit along with the Celsius and Kelvin equivalents through
inputted increments */

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;


int main() {

    cout << setprecision(4) << fixed; //Setting the decimal places to four.

    double SmallTemp,LargeTemp,Inc; //Creating my variables.

    //Getting the input in order from the lowest temperature, highest temperature, and the number I'm incrementing by.
    cin>> SmallTemp;
    cin>> LargeTemp;
    cin>> Inc;

    /*If the user types in a number where the smaller temperature has a greater value then the larger temperature OR
    the user types in an increment less than or equal to zero, the program will prompt the user they can't do so and
    lets you type in the numbers again. */
    while (SmallTemp > LargeTemp || Inc <= 0.0){
        cout << "Starting temperature must be <= ending temperature and increment must be > 0.0"<<endl;
        cin >> SmallTemp;
        cin >> LargeTemp;
        cin >> Inc;
        }

    cout << setw(18) << right <<"Fahrenheit" << setw(18) << "Celsius" << setw(18) << "Kelvin" <<endl; //Setting my menu right

    /*If all of the parameters are followed, the program will run until the smaller temperature in incremented to either exactly
    the larger temperature, or a value before it in which the program could not increment anymore. */
    while (SmallTemp <= LargeTemp ){
        double Celsius = ((SmallTemp - 32) / 1.8); //Celsius equation from Fahrenheit.
        double Kelvin = Celsius + 273.15; //Kelvin equation from Fahrenheit.

        cout << setw(18) << right << SmallTemp << setw(18) << Celsius << setw(18) << Kelvin <<endl; //Displaying the menu of values

        //Every run, the smaller temperature will get incremented by the previously inputted value until it reaches the larger temperature.
        SmallTemp += Inc;
        }

   return 0;
}
