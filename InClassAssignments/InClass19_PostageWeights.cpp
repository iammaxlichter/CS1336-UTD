/*This program lets the user input a letter weight of a package and outputs the corresponding postage cost for first class mail
at ups.com*/

#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    double letterWeights[] = {1.0, 2.0, 3.0, 3.5, 4.0, 5.0, 6.0, 7.0, 8.0, 9.0, 10.0, 11.0, 12.0, 13.0}; //Package weight array
    int postageCosts[] = {49, 70, 91, 112, 161, 182, 203, 224, 245, 266, 287, 308, 329, 350}; // Costs in cents (usps.com 2017)

    double letter; //This variable stores the user entered letter weight
    double size = 14; //This variable is the size of the array
    bool correct; //This variable helps with the else statement

    //Prompting the user to enter the weight of the package
    cout << "Here are the possible weights of packages -\n";
    cout << "1.0, 2.0, 3.0, 3.5, 4.0, 5.0, 6.0, 7.0, 8.0, 9.0, 10.0, 11.0, 12.0, 13.0\n\n";
    cout << "Enter the letter weight of your package and you will receive the corresponding postage cost: ";
    cin >> letter;

    cout << "\n" << fixed << setprecision(1); //Setting decimal places to 1

    //This for loops runs through the WHOLE index of each array
    for (int i = 0; i < size; i++){

        //if the specific index as the loop runs 14 times is equal to the number that the user entered, we know the corresponding letter weight is at the index of i when it continues
        if (letterWeights[i] == letter){
            cout << "With a package weight of " << letter << " we get a corresponding price of $" << postageCosts[i] << "\n";
            correct = true;
        }
    }
    //If the user types in a number that isn't in the package weight list, this message will be prompted.
    if (!correct){
        cout << "Looks like " << letter << " isn't a possible package weight.\n";
        }
    return 0;
}


