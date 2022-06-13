/*This program generates two random numbered matrix's (0-50), displays those matrix's, then
displays them added to each other*/

#include <iomanip>
#include <iostream>
#include <cmath>
#include <fstream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>


using namespace std;

#define ROWS 3
#define COLS 3


void addMatrix(int [][COLS], int [][COLS], int [][COLS]); //PT
void printResult(int [][COLS], int [][COLS], int [][COLS], char); //PT

//This function adds both matrix's together
void addMatrix(int matrix1[][COLS], int matrix2[][COLS], int resultMatrix[][COLS]){
    //Running these for loops adds each individual element of each array into the resultArray
    for (int i = 0; i < ROWS; i++){
        for (int k = 0; k < COLS; k++){
            resultMatrix[i][k] = matrix1[i][k] + matrix2[i][k];
        }
    }
}

//This function prints the matrix's and the total array
void printResult(int matrix1[][COLS], int matrix2[][COLS], int resultMatrix[][COLS], char ch){

    //Running through the matrix's
    for (int i = 0; i < ROWS; i++){

        //Printing out the matrix's and once the matrix's end, appropriate spacing is applied
        for (int k = 0; k < COLS; k++){
                cout << matrix1[i][k] << " ";
        }
        if (i == 1){
            cout << ch << " ";
        }
        else {
            cout << "  ";
        }


        //Printing out the matrix's and once the matrix's end, appropriate spacing is applied
        for (int k = 0; k < COLS; k++){
                cout << matrix2[i][k] << " ";
        }
        if (i == 1){
            cout << " =  ";
        }
        else {
            cout << "   ";
        }


        //Printing the resulted array (the one added)
        for (int k = 0; k < COLS; k++){
                cout << resultMatrix[i][k] << " ";
        }
        cout << endl;
    }
}

int main(){


    //Creating all my matrix's
    int matrix1[ROWS][COLS];
    int matrix2[ROWS][COLS];
    int resultMatrix[ROWS][COLS];

    srand(time(NULL)); //This is for random numbers

    //Putting random numbers 0-50 in the matrices
    for (int i = 0; i < ROWS; i++){
        for (int j = 0; j < COLS; j++){
            matrix1[i][j] = rand() % 51;
            matrix2[i][j] = rand() % 51;
        }
    }

    //Printing out the first matrix
    cout << "Matrix 1 is : " << endl;
    for (int i = 0; i < ROWS; i++){
        for (int k = 0; k < COLS; k++){
            cout << matrix1[i][k] << " ";
        }
        cout << endl;
    }

    //Printing out the second matrix
    cout << "Matrix 2 is : " << endl;
    for (int i = 0; i < ROWS; i++){
        for (int k = 0; k < COLS; k++){
            cout << matrix2[i][k] << " ";
        }
        cout << endl;
    }

    //Printing out the addition of the two matrices
    cout<<endl<<"The addition of matrices is : "<<endl;
    addMatrix(matrix1, matrix2, resultMatrix);
    printResult(matrix1, matrix2, resultMatrix,'+');

    return 0;
}


/*Output 1 -

Matrix 1 is :
17 43 16
44 26 3
37 20 1
Matrix 2 is :
16 49 24
29 40 14
21 45 45

The addition of matrices is :
17 43 16   16 49 24    33 92 40
44 26 3 + 29 40 14  =  73 66 17
37 20 1   21 45 45    58 65 46 */


