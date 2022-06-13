#include <iostream>
using namespace std;
int main() {

    //creating all of the variables we are using
    int num1, num2, i;
    int GCD = 0;

    //getting the input for both integers that we are trying to find the GCD of
    cout << "Enter the first integer ";
    cin >> num1;
    cout << "Enter the second integer ";
    cin >> num2;

    //the integer 'i' goes up by one every time 'i' is less or equal to both integers that were entered
    for(i=1; ((i <= num1) && (i <= num2)); i++)
    {
        /*if the first or second integer has no remainder when modulus'd
        into i, because 'i' was going up every cycle, the greatest common divisor will be equal to i*/
        if (num1 % i == 0 && num2 % i == 0)
        {
            GCD = i;
        }
    }

    //This is the output statement
    cout << "\nThe Greatest common divisor of " << num1 << " and " << num2 << " is " << GCD << endl;

   return 0;

}

/*Output 1 - Enter the first integer 2342
Enter the second integer 324

The Greatest common divisor of 2342 and 324 is 2*/

/*Output 2 - Enter the first integer 444
Enter the second integer 888

The Greatest common divisor of 444 and 888 is 444*/

/*Output 3 - Enter the first integer 54
Enter the second integer 9

The Greatest common divisor of 54 and 9 is 9*/

/*Output 4 - Enter the first integer 455
Enter the second integer 555

The Greatest common divisor of 455 and 555 is 5*/
