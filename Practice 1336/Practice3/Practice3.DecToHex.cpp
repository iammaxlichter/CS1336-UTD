/* This program translates a decimal number into a hexadecimal number. */

#include <stdlib.h>
#include <iostream>
#include <time.h>

using namespace std;
int main() {

    int decimal, temporary; //Creating the variables used later.

    //Getting the decimal number used to convert later.
    cout << "Enter a decimal value to be converted to hexadecimal: ";
    cin >> decimal;

    int display = decimal; //Storing the user entered number in another variable to display later.

    string hexadecimal = ""; //Creating my conversion empty string.

    //Creating an array in which the loop will take the index from (as known as the hexadecimal values).
    char h[] = {'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};

    //While the user types a number greater than zero, the following code will run.
    while (decimal > 0){

        temporary = decimal % 16; //This temporary variable puts the decimal into the hexadecimal plane.
        hexadecimal = h[temporary] + hexadecimal; //The string is added to with the index of that temporary value
        decimal = decimal / 16; //The value of the inputted decimal value goes to zero so the loop will break.
    }

    //This is the output statement for which the user will be shown the number they entered and the hexadecimal conversion.
    cout << "From the decimal value of " << display << ", the hexadecimal conversion is " << hexadecimal << endl;



   return 0;
}

/*Output 1 - Enter a decimal value to be converted to hexadecimal: 35
From the decimal value of 35, the hexadecimal conversion is 23 */

/*Output 2 - Enter a decimal value to be converted to hexadecimal: 2535
From the decimal value of 2535, the hexadecimal conversion is 9E7 */

/*Output 3 - Enter a decimal value to be converted to hexadecimal: -353
From the decimal value of -353, the hexadecimal conversion is */

/*Output 4 - Enter a decimal value to be converted to hexadecimal: 434224
From the decimal value of 434224, the hexadecimal conversion is 6A030*/
