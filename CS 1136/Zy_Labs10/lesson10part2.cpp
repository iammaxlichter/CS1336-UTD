/* This program takes the averages/smallest numbers in columns/rows of a file containing a multitude of grades */

#include <iostream>
#include <iomanip>
#include <fstream>

using namespace std;

#define MAX_COLUMNS 5

int readFile(double values[][MAX_COLUMNS], int maxRows, string inputFileName); //PT
double average(double values[][MAX_COLUMNS], int numberRows); //PT
double rowSmallest(double values[][MAX_COLUMNS], int row); //PT
double columnAverage(double values[][MAX_COLUMNS], int column, int numberRows); //PT

int main() {

    //Creating my 2d array and instantiating variables
    const int MAX_ROWS = 30;
    double grades[MAX_ROWS][MAX_COLUMNS];

    //Getting the file name
    string inputFileName;
    cout << "Enter input file name";
    cin >> inputFileName;

    int actualRows = readFile(grades, MAX_ROWS, inputFileName); //Equating the function to a variable

    //In the actual function, it returns certain values. These are the case conditions for each values
    if (actualRows == -1){
        cout << "\nFile \"" << inputFileName << "\"" << " could not be opened" << endl;
        return -1;
    }
    else if (actualRows == 0) {
        cout << "The input file \"" << inputFileName << "\" did not contain any data" << endl;
        return -1;
    }

    //If those conditions aren't meant, this following code runs displaying everything
    cout << setprecision(2) << fixed << endl;
    cout << "Processing " << actualRows << " rows, and " << MAX_COLUMNS << " columns" << endl;
    cout << "Average for all values is " << average(grades, actualRows) << endl;

    //Average for both rows and columns
    for (int i = 0; i < MAX_COLUMNS; i++) {
        cout << "Average for column " << i << " is " << columnAverage(grades, i, actualRows) << endl;
    }
    for (int i = 0; i < actualRows; i++) {
        cout << "Smallest value for row " << i << " is " << rowSmallest(grades, i) << endl;
    }

    return 0;
}

int readFile(double values[][MAX_COLUMNS], int maxRows, string inputFileName) {

    //Creating variables that are used to read a file
    int rowCount=0;
    int j=0;
    double b;

    //Opening my file. If the file is unable to open, returns 1.
    ifstream inFile;
    inFile.open(inputFileName);
    if(!inFile){
        return -1;
    }

    /* Until the end of file ends and the row count is less than the maximum amount of rows, the file is read into
    a double value and then the 2D array is put through that double value. If the amount of columns = the maximum amount ABLE of columns, rows start incrementing*/
    while(!inFile.eof() && rowCount < maxRows) {

        inFile >> b;
        values[rowCount][j] = b;
        j++;

        if(j == MAX_COLUMNS){
          j = 0;
          rowCount++;
        }
    }

    inFile.close(); //Closing the file

    //If the row count is zero and column count is less than five, returns 0
    if(rowCount == 0 && j < 5)
        return 0;

    //Otherwise, returns the rowcount
    else
        return rowCount;
}



double average(double values[][MAX_COLUMNS], int numberRows) {

    //This sequence just gets the average for both columns and rows in the file and returns it
    double avg = 0;
    for (int i = 0; i < numberRows; i++) {
        for (int j = 0; j < MAX_COLUMNS; j++)
            avg += values[i][j];
    }

    avg /= (numberRows * MAX_COLUMNS);
    return avg;

}

double columnAverage(double values[][MAX_COLUMNS], int column, int numberRows) {

    //This sequence just gets the average all the columns in the file and returns it
    double avg = 0.0;
    for (int i = 0; i < numberRows; i++) {
        avg += values[i][column];
    }

    return avg / numberRows;
}


double rowSmallest(double values[][MAX_COLUMNS], int row) {

    //This sequence obtains the smallest value of each row and returns it
    double small = values[row][0];
    for (int i = 0; i < MAX_COLUMNS; i++) {
        if (small > values[row][i]){
            small = values[row][i];
        }
    }

    return small;

}
