/* This program calculates the sum of the two diagonals of a 4x4 2D array */

#include <iomanip>
#include <iostream>
#include <cmath>
#include <fstream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAXROWS 4
#define MAXCOLS 4

using namespace std;

int sumMajorDiagonal(int m[MAXROWS][MAXCOLS]); //PT
int sumOtherDiagonal(int m[MAXROWS][MAXCOLS]); //PT

//This is the first function used that calculates the first major diagonal
int sumMajorDiagonal(int m[MAXROWS][MAXCOLS]) {

    int Total = 0; //This variable is used to store the total we are adding up

    /*Running the 2D array and once everything is ran, if the rows and columns equal each other, then
     the program knows to add those specific numbers to the total*/
    for (int i = 0; i < MAXROWS; i++){
        for (int k = 0; k < MAXCOLS; k++){
            if (i == k){
                Total += m[i][k];
            }
        }
    }
    return Total; //Returning the total
}

//This is the first function used that calculates the other major diagonal
int sumOtherDiagonal(int m[MAXROWS][MAXCOLS]){

    int Total = 0;//This variable is used to store the total we are adding up

    /*Running the 2D array and once everything is ran, if the rows + columns equal to the columns minus 1, then
     the program knows to add those specific numbers to the total*/
    for (int i = 0; i < MAXROWS; i++){
        for (int k = 0; k < MAXCOLS; k++){
            if ((i + k) == (MAXCOLS - 1)){
                Total += m[i][k];
            }
        }
    }
    return Total; //Returning the total
}

int main(){

    srand(time(NULL)); //This is to get my random number

    int Array[MAXROWS][MAXCOLS];//Creating my array that is passed through by the functions

    //Putting the numbers (random from 0-50) in the array we created
    for (int i = 0; i < MAXROWS; i++){
        for (int k = 0; k < MAXCOLS; k++){
                Array[i][k] = rand() % 51;
        }
    }

    //Displaying the numbers in the 4x4 array we just created
    for (int i = 0; i < MAXROWS; i++){
        for (int k = 0; k < MAXCOLS; k++){
            cout << Array[i][k] << " "; //Space after every number
        }
        cout << "\n"; //New line after every 4 numbers (max rows)
    }

    //Putting the sums into variables for easier displaying
    int First = sumMajorDiagonal(Array);
    int Second = sumOtherDiagonal(Array);

    //Displaying the totals
    cout << "Sum of the elements in the major diagonal is " << First << endl;
    cout << "Sum of the elements in the other diagonal is " << Second << endl;
}

/*Output 1 -

5 11 43 31
32 12 30 16
21 6 15 39
36 4 39 44
Sum of the elements in the major diagonal is 76
Sum of the elements in the other diagonal is 103 */
