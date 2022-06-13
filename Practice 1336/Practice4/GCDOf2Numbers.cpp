/*This program finds the GCD of two different integers*/

#include <iomanip>
#include <iostream>
#include <cmath>

using namespace std;

int GCD(int, int); //PT

//This function gets the GCD of the two numbers and return them
int GCD(int num1, int num2){
    if (num1 == 0 || num2 == 0){
        return 0;
    }
    else if (num1 == num2){
        return num1;
    }
    else if (num1 > num2){
        return GCD(num1 - num2, num2);
    }
    else{
        return GCD(num1, num2 - num1);
    }
}



main(){
    //Getting the first number
    int Number1, Number2;
    cout << "Enter your first integer: ";
    cin >> Number1;

    //Getting the second number
    cout << "Enter your second integer: ";
    cin >> Number2;

    //Putting the function into a variable with the inputted numbers as the argument and displaying everything
    int Total = GCD(Number1,Number2);
    cout << "The greatest common divisor for " << Number1 << " and " << Number2 << " is " << Total;
}

/*Output 1 -
Enter your first integer: 2345
Enter your second integer: 4323
The greatest common divisor for 2345 and 4323 is 1*/

/*Output 2 -
Enter your first integer: 32
Enter your second integer: 23
The greatest common divisor for 32 and 23 is 1*/

/*Output 3 -
Enter your first integer: 25000
Enter your second integer: 5
The greatest common divisor for 25000 and 5 is 5*/

/*Output 4 -
Enter your first integer: 25000
Enter your second integer: 2500
The greatest common divisor for 25000 and 2500 is 2500*/
