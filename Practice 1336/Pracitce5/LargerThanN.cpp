/*This program allows the user to enter a number and then the any number in the
hard-coded array will be displayed, but anything < that number won't*/

#include <iostream>
#include <iomanip>

using namespace std;

int main(){

    //Creating my variable i'm using to display the numbers and hard-coding the array in
    int n;
    int numbers[]  = {1, 23, 43, 54, 4, 34, 2, 5, 7, 9, 57, 32};

    //Display the original array
    cout << "The original array is: ";
    for (int i = 0; i < 12; i++){
        cout << numbers[i] << " ";
    }

    //Getting the number that i'm comparing with the array
    cout << "\nEnter a number: ";
    cin >> n;

    cout << "The numbers greater than " << n << " is: "; //Output statement for the follow list of numebrs

    /*For loop that run's through the array and if the number entered is less than the index of the for loops
    number in the array, the numbers less than THAT index won't display, otherwise, they will.*/
    for (int i = 0 ; i < 12; i++){
        if (numbers[i] > n){
            cout << numbers[i] << " ";
        }
    }


    return 0;
}

/*Output 1 -
The original array is: 1 23 43 54 4 34 2 5 7 9 57 32
Enter a number: 0
The numbers greater than 0 is: 1 23 43 54 4 34 2 5 7 9 57 32*/

/*Output 2 -
The original array is: 1 23 43 54 4 34 2 5 7 9 57 32
Enter a number: 59
The numbers greater than 59 is:*/

/*Output 3 -
The original array is: 1 23 43 54 4 34 2 5 7 9 57 32
Enter a number: 43
The numbers greater than 43 is: 54 57*/

/*Output 4 -
The original array is: 1 23 43 54 4 34 2 5 7 9 57 32
Enter a number: 14
The numbers greater than 14 is: 23 43 54 34 57 32*/
