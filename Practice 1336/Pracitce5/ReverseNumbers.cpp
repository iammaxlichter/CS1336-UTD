/*This program reverses the order 10 numbers that the user inputs*/

#include <iomanip>
#include <iostream>

#define SIZE 10 //Array size

using namespace std;

int main() {

    int Array[SIZE]; //Creating the array

    //Reading in the array with the numbers that the user inputs
    cout << "Read 10 numbers: ";
    for (int i = 0; i < SIZE; i++){
        cin >> Array[i];
    }

    //Reversing the order of the variables with a decreasing for loop and displaying it
    cout << "The reversal of the input is ";
    for (int i = 9; i >= 0; i--){
        cout << Array[i] << " ";
    }

    return 0;

}

/*Output 1 -
Read 10 numbers:  3 6 78 98 12 34 56 78 09 12
The reversal of the input is 12 9 78 56 34 12 98 78 6 3*/


/*Output 2 -
Read 10 numbers: 0 0 1 0 0 0 1 0 0 1
The reversal of the input is 1 0 0 1 0 0 0 1 0 0*/

/*Output 3 -
Read 10 numbers: -1 -2 -3 -4 -5 -6 -7 -8 -9 -10
The reversal of the input is -10 -9 -8 -7 -6 -5 -4 -3 -2 -1*/

/*Output 4 -
Read 10 numbers: 1
2
1
2
1
2
2
2
2
2
The reversal of the input is 2 2 2 2 2 1 2 1 2 1*/
