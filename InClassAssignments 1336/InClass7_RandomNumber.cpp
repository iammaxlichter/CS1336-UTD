/* Generate two random numbers. One number must be between 43 and 87.
The second number must be between 35 and 93. Display the sum of two numbers*/


#include <stdlib.h>
#include <iostream>
#include <time.h>

using namespace std;
int main() {

    int min1 = 43; //These 4 values below are the minimum and maximums of each respected random number
    int max1 = 87;
    int min2 = 35;
    int max2 = 93;

    srand(time(NULL)); //returns current time on the person running it's computer. The current time is never the same so the number will always be different
    int Random_Number_1 = rand() % (max1 - min1 + 1) + min1; //Generates the first random number
    int Random_Number_2 = rand() % (max2 - min2 + 1) + min2; //Generates the second random number
    int Random_Number_Summation = Random_Number_1 + Random_Number_2;

    cout << "Your first random number from 43 to 87 is " << Random_Number_1 << endl; //These two lines are the outputs for each random number
    cout << "Your first random number from 35 to 93 is " << Random_Number_2 << endl;
    cout << "The sum of both random numbers is " << Random_Number_Summation << endl; //This line displays the sum of both random numbers

   return 0;
}
