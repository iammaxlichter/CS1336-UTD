/* This program calculates the present value */

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;


double presentValue(double futureValue, double interestRate, int yearsNumber); // PT
void displayValues(double presentValue, double futureValue, double interestRate, int yearsNumber); // PT

double GettingFutureValue(); // PT
double GettingAnnualInterest(); // PT
int GettingYears(); // PT

//This function gets the future value and will not accept a number zero or below
double GettingFutureValue(){
    double Future;
    cout << "Enter future value\n";
    cin >> Future;
    if (Future <= 0)
        do {
            cout << "The future value must be greater than zero" << endl;
            cout << "Enter future value\n";
            cin >> Future;
        } while (Future <= 0);
    return Future;
}

//This function gets the annual interest rate and will not accept a number zero or below
double GettingAnnualInterest(){
    double Annual;
    cout << "Enter annual interest rate\n";
    cin >> Annual;
    if (Annual <= 0){
        do {
            cout << "The annual interest rate must be greater than zero" << endl;
            cout << "Enter annual interest rate\n";
            cin >> Annual;
        } while (Annual <= 0);
    }
    return Annual;
}

//This function gets the years and will not accept a number zero or below
int GettingYears(){
    int Years;
    cout << "Enter number of years\n";
    cin >> Years;
    if (Years <= 0){
        do {
            cout << "The number of years must be greater than zero" << endl;
            cout << "Enter number of years\n";
            cin >> Years;
        } while (Years <=0);
    }
    return Years;
}

//This function gets the present value and returns it
double presentValue(double futureValue, double interestRate, int yearsNumber){
    double ValuePresent = futureValue / pow((1 + interestRate), yearsNumber);
    return ValuePresent;
}

//This function displays everything that I've calculated
void displayValues(double presentValue, double futureValue, double interestRate, int yearsNumber){
    cout << "Present value: $" << fixed << setprecision(2) << presentValue << endl;
    cout << "Future value: $" << fixed << setprecision(2) << futureValue << endl;
    cout << "Annual interest rate: " << fixed << setprecision(3) << (interestRate * 100) << "%" << endl;
    cout << "Years: " << yearsNumber << endl;
}

//This is my main that displays everything that I've calculated to summarize it
int main (){
    int NumberOfYears;
    double ValuePresent, futureValue, Rate;

    futureValue = GettingFutureValue();
    Rate = GettingAnnualInterest();
    NumberOfYears = GettingYears();

    Rate = Rate / 100;
    ValuePresent = presentValue(futureValue, Rate, NumberOfYears);
    displayValues(ValuePresent, futureValue, Rate, NumberOfYears);

    return 0;
}

