/*This program gets the distance from the earth and moon using seconds and is ran through a bunch of different functions with parameters */

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

double readSeconds(); //PT
double calculateEarthDistance(double); //PT
double calculateMoonDistance(double); //PT
void displayResults(double, double, double); //PT

//This function gets and returns the seconds from the user
double readSeconds(){
    double seconds;
    cout << "Enter the time (in seconds)";
    cin >> seconds;
    cout << "\n";
    return seconds;
}

//This function calculates and returns the earth distance
double calculateEarthDistance(double seconds){
    cout << fixed << setprecision(4);
    double GravityEarth = 9.8 * pow(seconds, 2);
    double DistanceEarth = .5 * GravityEarth;
    return DistanceEarth;
}

//This function calculates and returns the moon distance
double calculateMoonDistance(double seconds){
    cout << fixed << setprecision(4);
    double GravityMoon = 1.6 * pow(seconds, 2);
    double DistanceMoon = .5 * GravityMoon;
    return DistanceMoon;
}

//This function displays the results that we calculated
void displayResults(double seconds, double DistanceEarth, double DistanceMoon){

    cout << "The object traveled " << fixed << setprecision(4) << DistanceEarth << " meters in " << fixed << setprecision(2) << seconds << " seconds on Earth\n";
    cout << "The object traveled " << fixed << setprecision(4) << DistanceMoon << " meters in " << fixed << setprecision(2) << seconds << " seconds on the Moon\n";
}


int main() {
    double time = readSeconds(); //Putting seconds into an actual variable we can manipulate

    //When the seconds the user inputted doesn't equal zero...
    while (time != 0){

        //If the seconds the user put in are less than zero, they will be prompted to enter the seconds again
        if (time < 0) {
            cout << "The time must be zero or more" << endl;
        }

        //else, the functions we created are put into variables and then those variables are put into the parameter of the display results, effectively, displaying the results
        else {
            double Earth_Distance = calculateEarthDistance(time);
            double Moon_Distance = calculateMoonDistance(time);
            displayResults(time, Earth_Distance, Moon_Distance);
        }

        //This'll run every time the user types in a number less than zero making the loop run through the question asking about seconds again until the user types in a number that fits
        time = readSeconds();
    }
    return 0;
}


