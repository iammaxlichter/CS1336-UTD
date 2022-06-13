#include <iostream>
#include <fstream>
#include <iomanip>
#include <cmath>
#include <string>

using namespace std;


int readData(ifstream &inFile, double &presentValue, double &interestRate, int &months); // PT
double futureValue(double presentValue, double interestRate, int months); // PT
void display(double presentValue, double interestRate, int months, string message); // PT
void writeData(ofstream &outFile, double future, double presentValue, double interestRate, int months); // PT


int main(){

    /* Lines 19-35 let's the user input a file, if the file doesn't work, the user will be prompted.
    These lines will also output everything into a file called "output.xls." If that file doesn't exist, it'll be created */
    string inFileInput;
    string outFileFile = "output.xls";

    cout << "Enter input file name\n";
    cin >> inFileInput;

    ifstream inFile(inFileInput.c_str());

    if(!inFile){
        cout << "File \"" << inFileInput << "\" could not be opened" << endl;
        return 1;
        }

    ofstream outFile(outFileFile.c_str());
    outFile << "Future Value\tPresent Value\tMonthly Interest\tMonths" << endl;
    outFile << fixed << setprecision(2);
    cout << fixed << setprecision(2);


    //creating my variables
    double presentValue;
    double interestRate;
    double future;
    int months;


    //Putting the function into a variable
    int returnNumber = readData(inFile, presentValue, interestRate, months);

    //Each case is ran if the readData function returns each respective value
    while(returnNumber != 0){

        //This is ran if the numbers read are less than zero
        if(returnNumber == 2){
            display(presentValue, interestRate, months, "One or more of the above values are not greater than zero");
        }

        //If the numbers are greater than zero, this whole sequence runs, basically outputting everything
        else{
            interestRate = interestRate/100;
            future = futureValue(presentValue, interestRate, months);
            interestRate = interestRate*100;
            outFile << setprecision(2)<< future << "\t" <<  presentValue << "\t" << setprecision(3) << interestRate << "\t" << months << endl;
        }

        returnNumber = readData(inFile, presentValue, interestRate, months);
    }

    //Closing the files
    inFile.close();
    outFile.close();
}


//This function returns a number that will be case ran in the main depending on the parameters the input follows
int readData(ifstream &inFile, double &presentValue, double &interestRate, int &months){
    if(inFile >> presentValue >> interestRate >> months){
        if(presentValue <= 0 || interestRate <= 0 || months <= 0){
            return 2;
        }
        else{
            return 1;
        }
    }
    else{
        return 0;
    }
}

//This function calculates the futurevalue and returns it
double futureValue(double presentValue, double interestRate, int months){
    double futura = presentValue * (pow((interestRate+1),months));
    return futura;
}

//This function just displays everything
void display(double presentValue, double interestRate, int months, string message){
    cout << presentValue << " " << setprecision(3) << interestRate << setprecision(2) << " " << months << endl;
    cout << message << endl;
}

//This function writes the data into the output file that I hard-coded in the beginning
void writeData(ofstream &outFile, double future, double presentValue, double interestRate, int months){
    outFile << future << " " << presentValue << " " << interestRate << " " << months << endl;
}
