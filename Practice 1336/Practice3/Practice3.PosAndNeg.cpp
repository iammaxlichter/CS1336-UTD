/* This program will read an unspecified number of integers and
display how many positive and negative integers there are along
with the total number of integers and the average of them as well. */

#include <stdlib.h>
#include <iostream>
#include <time.h>

using namespace std;
int main() {

    //Creating all of my variables used later
    int IntList;
    int positive = 0;
    int negative = 0;
    int sum = 0;

    cout << "Enter an integer, the input ends if it is 0: "; //Prompting the user to start entering numbers.

    //This while loop will run until the user types '0', where then the loop will break.
    while (true){

        cin >> IntList; //Starts gathering numbers from the user.

        //This if statement declares that if the user types in '0', the loop will end.
        if (IntList == 0){
            break;
        }

        //This else if statement declares that if the user types in a number greater than zero, the variable 'positives' will go up by one.
        else if (IntList > 0){
            positive++;
        }

        //This else if statement declares that if the user types in a number greater than zero, the variable 'negatives' will go up by one.
        else if (IntList < 0){
            negative ++;
        }

        sum += IntList; //This variable adds every integer the user types in to it.
    }

        //These statements output the total number of positive and negative variables along with the total number of variables typed.
        cout << "The number of positives is " << positive << endl;
        cout << "The number of negatives is " << negative << endl;
        cout << "The total is " << sum - 1 << endl;

        //This statement takes the total sum of all the integers typed in and divides them by the number of integers typed in.
        cout << "The average is " << ((float)sum)/(positive+negative) << endl;


    return 0;
}

/*Output 1 - Enter an integer, the input ends if it is 0: 35 12 25 64 -35 -36 -766 0
The number of positives is 4
The number of negatives is 3
The total is -702
The average is -100.143 */

/*Output 2 - Enter an integer, the input ends if it is 0: 2390 2390 2930 2390 2903 2930 0
The number of positives is 6
The number of negatives is 0
The total is 15932
The average is 2655.5 */

/*Output 3 - Enter an integer, the input ends if it is 0: -32523 -35235 -35423 -23523 0
The number of positives is 0
The number of negatives is 4
The total is -126705
The average is -31676 */

/*Output 4 - Enter an integer, the input ends if it is 0: 390 23908 092590 2 0 923
The number of positives is 4
The number of negatives is 0
The total is 116889
The average is 29222.5 */
