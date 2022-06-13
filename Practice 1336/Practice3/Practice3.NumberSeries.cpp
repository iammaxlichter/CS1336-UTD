/* This program calculates the total of the series "1/30 + 2/29 + 3/28 + ........29/2 + 30/1"
using a for loop */

#include <stdlib.h>
#include <iostream>
#include <time.h>

using namespace std;
int main() {

    float total = 0; //This variable is going to be what I store my total into.

    //This for loop runs until 'i' reaches 30 from 1.
    for(int i = 1; i <= 30; i++) {

        total = total + i/(31-i); //Every time this loop is ran, total is increased by this algorithmic expression.
    }

    cout << "\nTotal of the series is: " << total << endl; //This line just displays the total of the series.

   return 0;
}

/*Output - Total of the series is: 82 */
