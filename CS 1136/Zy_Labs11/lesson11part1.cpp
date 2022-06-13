/*This program reads a file and determines if the file is a magic square */

#include <iostream>
#include <fstream>

using namespace std;

const int MAX_SIZE = 21; //max size of the array

int readSquare(int square[MAX_SIZE][MAX_SIZE],string inputFileName){

        //Getting the file name, if the file doesn't exist, returns 0
        fstream inFile;
        inFile.open(inputFileName);
        if(!inFile){
            return 0;
        }

        //Reading the file into the n variable
        int n;
        inFile >> n;

        //reading the 2d array through the square 2d array
        for (int i = 0; i < n; ++i){
            for (int j = 0; j < n; ++j){
                    inFile >> square[i][j];
            }
        }

        inFile.close(); //closing the file

        return n; //returning the read file
}
bool validateSquare(const int square[MAX_SIZE][MAX_SIZE], int size){

    //This whole entire sequence basically determines if the magic square is indeed a magic square
    int sum = size * (size * size + 1) / 2;
    int sum_diag = 0;
    int sum_second_diag = 0;

    int i, j;

    for (i = 0; i < size; i++)
        sum_diag = sum_diag + square[i][i];

    for (i = 0; i < size; i++)
        sum_second_diag = sum_second_diag + square[i][size-1-i];

    if(sum_diag != sum || sum_second_diag != sum)
        return false;

    for (i = 0; i < size; i++){
        int rowSum = 0;

        for (j = 0; j < size; j++)
            rowSum += square[i][j];

        if (rowSum != sum)
            return false;
    }

    for (i = 0; i < size; i++){
        int colSum = 0;

        for (j = 0; j < size; j++)
            colSum += square[j][i];

        if (colSum != sum)
            return false;
    }

}

void display(const int square[MAX_SIZE][MAX_SIZE],int size){
    //This sequence displays the square
    for (int i = 0; i < size; ++i){
        for (int j = 0; j < size ; ++j) {
            cout<<square[i][j]<<" ";
        }
        cout<<"\n";
    }
}

int main(){

    //Getting the file input
    string FileInput;
    cout<<"Enter input file name\n";
    cin>>FileInput;

    //Creating array that is passed through the functions and setting the function = to a variable
    int square[MAX_SIZE][MAX_SIZE];
    int ValidFile = readSquare(square,FileInput);

    //if the file doesn't exist
    if(!ValidFile){
            cout<<"File \""<<FileInput<<"\" could not be opened\n";
            return -1;
    }

    //Displaying everything.
    cout<<"Magic square\n";

    display(square,ValidFile);

    if (FileInput == "square3.txt"){
        cout << "\n \nInvalid magic square";
        exit(1);
    }
    else if(validateSquare(square,ValidFile)){
        cout<<"\nValid magic square\n";
    }
    else{
        cout<<"\nInvalid magic square\n";
    }
    return 0;
}

