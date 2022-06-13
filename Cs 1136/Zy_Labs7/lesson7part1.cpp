/*This program reads values from a txt file and outputs the corresponding numbers in the file as stars depending on
how large the numbers in the program are */
#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>

using namespace std;

bool ReadFile(ifstream &File, long long int &data, unsigned int &store){

    bool Validity = false; //This bool variable checks to see if the data read is valid

        while (File >> store >> data){ //Reads 2 values from the file, and when the end of the files comes, the loop will break

            if (store < 1 || store > 99){ //Checks the validity of the store number

                cout << "The store number " << store << " is not valid\n";
                continue;
            }

            if (data < 0){ //Checks the validity for the data value

                cout << "The sales value for store " << store << " is negative\n";
                continue;
            }


            if (data >= 0 && (store >= 1 && store <= 99)){ //This runs of the store and data values are valid

                 Validity = true; //It'll exit and break out of the loop
                 break;
            }
            //This will keep running until we get to the end of the file or valid data is read
        }

        if (!Validity){ //If the data isn't found or it gets to the end of the file, it returns false
            return false;
        }

        return true; //But it returns true if the data is found
}

void Displaying(ofstream &File, long long int data, unsigned int store){

    File << "\nStore " << setw(2) << right << store << ": "; //outputting with correct lengths

    for (int i=0; i < data / 5000; i++){ //This loop prints out the stars for the file
        File << "*";
        }
    }



int main() {
    string FileName; //Variable for input the file name
    ofstream outputFile; //creating object for inputting file processing
    ifstream File; //creating object for outputting file processing


    cout << "Enter input file name\n";
    cin >> FileName;
    File.open(FileName); //Gets file name and opens it

    if (File){ //If the FileName is a valid file, this code runs

        outputFile.open("saleschart.txt"); //opens outputFile

        if(outputFile){ //If this file can be opened the following code will run
            long long int data; //store the value of data
            unsigned int store; //store the value of store

            int Valid = 0; //Variable used to check the validity of the file

            while (ReadFile(File,data,store)){ //Calling the ReadFile function, and while its true, the following code will run


                if (Valid == 0){ //This code will run because of the Valid variable

                    outputFile << "SALES BAR CHART";
                    outputFile << "\n(Each * equals 5,000 dollars)";
                    Valid = 1; //Right here it will stop because Valid = 1

                }


                Displaying(outputFile, data, store); //Calling the Displaying function to write output to the file and output the errors on the C++ console

            }

        outputFile << "\n"; //Newline after Displaying is ran
        outputFile.close(); //
    }
        else{ //If the outputFile couldn't be opened, this message is told
            cout <<"File " << "saleschart.txt" << " could not be opened\n";
        }

        File.close();//Closing the input File
    }
    else{ //If the inputted file couldn't be opened, this message is told
        cout  << "File \""<< FileName << "\" could not be opened\n";
    }

    return 0;

}
