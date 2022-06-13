/*This program detects whether a number you entered is a palindrome or not*/

#include <iostream>
#include <iomanip>
using namespace std;
int main() {

    //Getting the five-digit number we are checking
    int FiveDigit;
    cout << "Enter a five-digit integer: ";
    cin >> FiveDigit;

    //These five statements are taking each respective place-holding digit and changing it to the corresponding side
    int DigitOne = FiveDigit / 10000;
    int DigitTwo = (FiveDigit / 1000) % 10 * 10;
    int DigitThree = ((FiveDigit / 100) % 100) % 10 * 100;
    int DigitFour = (((FiveDigit / 10) % 1000) % 100) % 10 * 1000;
    int DigitFive = ((((FiveDigit % 10000) % 1000) % 100) % 10) * 10000;
    int Palindrome = DigitFive + DigitFour + DigitThree + DigitTwo + DigitOne;

    /*If the five-digit number is equal to the number that we created (palindrome), it'll prompt the user that this is a palindrome
    Otherwise, it will prompt the user that this isn't a palindrome*/
    if (FiveDigit == Palindrome)
    {
        cout << FiveDigit << " is a palindrome" << endl;
    }
    else
    {
        cout << FiveDigit << " is not a palindrome" << endl;
    }
    return 0;

}

/*Output 1- Enter a five-digit integer: 12321
12321 is a palindrome*/

/*Output 2- Enter a five-digit integer: 34535
34535 is not a palindrome*/

/*Output 3- Enter a five-digit integer: 45654
45654 is a palindrome*/

/*Output 4- Enter a five-digit integer: 29292
29292 is a palindrome*/

