/*This program reads a file containing numbers and determines if they are valid or not
if they are not valid those invalid numbers will be put into a separate file. This program will also
track the count of each numbers in the file, the valid numbers, and the invalid numbers. */

#include <iostream>
#include <iomanip>
#include <fstream>

using namespace std;


int main() {

    cout << setprecision(4) << fixed << showpoint; //Setting decimal points outside for console

    ifstream inputFile; //creating object for inputting file processing
    ofstream outputFile; //creating object for outputting file processing

    //All of my variables used throughout the program
    int count = 0;
    int valid = 0;
    int notvalid = 0;
    double total = 0.0;
    double average = 0.0;
    double number;
    string FileName;

    //Opening up my input file
    cout << "Enter input file name\n";
    cin >> FileName;
    inputFile.open(FileName);

    //If the file doesn't open, the following message will be sent through console
    if (!inputFile){
        cout <<"File \""<< FileName << "\" could not be opened\n";
        return 0;
    }

    //Otherwise, the following code will run
    else{
        outputFile.open("invalid-values.txt"); //This creates/opens up a txt file that we'll use to output numbers
        cout << "Reading from file \"" << FileName << "\"" << endl; //Reading from "x" file

        //Reading the inputted file
        while (inputFile >> number)
        {
            count++; //Every number the count goes up

            //If the number is valid, the valid variable goes up
            if (number >= 0 && number <= 105){
                total += number;
                valid++;
            }
            /*if the number isn't valid, those invalid numbers will be outputting the the previously mentioned
            text file and the notvalid variable will be added to by one for every invalid number*/
            else{
                outputFile << setprecision(5) << fixed << showpoint;
                notvalid++;
                outputFile << number << endl;
            }
        }
        inputFile.close(); //Closing input file
        outputFile.close(); //Closing output file
        }
        //Displaying all of the variables we read from the input file
        cout << "Total values: " << count << endl;
        cout << "Invalid values: " << notvalid << endl;
        cout << "Valid values: " << valid << endl;

        //If there aren't any valid values, no average can be calculated
        if (valid == 0){
            cout << "An average cannot be calculated" << endl;
        }
        //Otherwise the average is calculated at 4 decimal points
        else{
            average = total / valid;
            cout << "Average of valid values: " << average << endl;
        }


    return 0;
}
