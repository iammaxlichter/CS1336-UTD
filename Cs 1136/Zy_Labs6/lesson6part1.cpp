#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;


int main() {

    /* Creating variables. The bool variable is used for our while loop below.
    The count variable is a built in function that counts the amount of characters in a line */
    unsigned int num1, num2;
    unsigned int i;
    bool loop = true;
    int count = 0;

    /*This while loop takes the lower and higher value and runs this sequence of code until the loop has met the preliminary conditions of being
    between 32 and 126 along with not having the first number be higher than the second number*/
    while (loop)
    {

        cout << "Enter lower and upper values\n";
        cin >> num1 >> num2;

        if ((num1 < 32) || (num1 > 126))
            {
                cout << "Values must be in range 32 to 126 inclusive\n";
            }

        else if ((num2 < 32) || (num2 > 126))
            {
                cout << "Values must be in range 32 to 126 inclusive\n";
            }
        else if (num1 > num2)
            {
                cout << "Values must be in range 32 to 126 inclusive\n";
            }

        else
           loop = false;

    }

    //Display messages for the output
    cout << "Characters for ASCII values between " << num1 << " and " << num2 << endl;
    cout << "----+----+----+----+" << endl;


    /*This for loops is stating that i equals the lower value, and i is increasing till it hits the higher value. every time it increases it also displays
    the ASCII character to go along with it*/
    for (i = num1;i <= num2;i++)
    {
        cout << (char)i;
        count++;

        //This if statement says that every 20 characters, create a new line
        if(count % 20 == 0)
        {
            cout << endl;
        }
    }
    //This if statement says to output nothing if there are no characters left to display
    if(count % 20 != 0)


    //The ending output statements
    cout << endl;
    cout << "----+----+----+----+" << endl;


   return 0;
}
