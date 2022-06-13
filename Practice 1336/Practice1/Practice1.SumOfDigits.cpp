/*This program displays the sum of digits in a five digit number*/

#include <iostream>
#include <iomanip>
using namespace std;
int main() {

    //Getting a five digit number
    int FiveDigit;
    cout << "Enter a five digit number ";
    cin >> FiveDigit;

    //Getting the single digit for each respective placeholder in the 5 digit number
    int DigitOne = FiveDigit / 10000;
    int DigitTwo = (FiveDigit / 1000) % 10;
    int DigitThree = ((FiveDigit / 100) % 100) % 10;
    int DigitFour = (((FiveDigit / 10) % 1000) % 100) % 10;
    int DigitFive = ((((FiveDigit % 10000) % 1000) % 100) % 10);

    //Calculating the sum of all five of the digits in the five digit number asked for above
    int DigitTotal = DigitOne + DigitTwo + DigitThree + DigitFour + DigitFive;

    //Displaying the sum of all the digits in the five digit number gotten above
    cout << "The sum of the digits of the five digit number you entered is " << DigitTotal << endl;

    return 0;
}

/*Output 1- Enter a five digit number 57543
The sum of the digits of the five digit number you entered is 24*/


/*Output 2- Enter a five digit number 99999
The sum of the digits of the five digit number you entered is 45*/


/*Output 3- Enter a five digit number 00004
The sum of the digits of the five digit number you entered is 4*/


/*Output 4- Enter a five digit number 00000
The sum of the digits of the five digit number you entered is 0*/
