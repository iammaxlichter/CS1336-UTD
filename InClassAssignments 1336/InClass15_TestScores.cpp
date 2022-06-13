/*This program takes the users number grade and returns them back
their corresponding letter grade by running it through a function */

#include <iostream>
#include <iomanip>

using namespace std;

char TestGrades(double); // PT


//This function takes the inputting grade from the user and runs it through ultimately giving a letter grade
char TestGrades(double Grade){

    if (Grade >= 90)
    {
        return 'A';
    }

    else if ((Grade >= 80) && (Grade <=89))
    {
        return 'B';
    }

    else if((Grade >= 70) && (Grade <=79))
    {
        return 'C';
    }

    else if((Grade >= 60) && (Grade <=69))
    {
        return 'D';
    }

    else
    {
        return 'F';
    }


}


int main (){

    //Getting the number grade from the user
    cout << "Enter your grade: ";
    double Grade;
    cin >> Grade;

    //Assigning a variable to my function to make outputting easier and outputting it.
    char Answer;
    Answer = TestGrades(Grade);
    cout << Answer;

    return 0;
}
