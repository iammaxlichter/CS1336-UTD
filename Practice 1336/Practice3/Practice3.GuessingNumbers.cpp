/* This program generates a random integer 0-100 and prompts the user to enter a number
continuously until the number matches the randomly generated one. */

#include <stdlib.h>
#include <iostream>
#include <time.h>

using namespace std;
int main() {

    cout << "Guess the number between 0 to 100\n"; //Prompts the user what to do.

    //creates two of the same random numbers.
    srand(time(NULL));
    int guess, number = rand() % 101;

    //This code executes while the users guess does not equal the actual random number.
    do
    {
        //Gets the random number from the user.
        cout <<"Enter your guess: ";
        cin >> guess;

        //If the guess is less than the random number, the user will be told so.
        if (guess < number)
            cout << "Your guess is too low";
            cout << "\n";

        //If the guess is more than the random number, the user will be told so.
        if(guess > number)
            cout << "Your guess is too high";
            cout << "\n";

    } while(guess!=number); //This code will keep on executing until the user gets the random number right.

    cout << "Yes, the number is " << number << "\n"; //If the user guesses right, the loop will break and the user will be prompted they win.

   return 0;
}

/*Output 1 - Guess the number between 0 to 100
Enter your guess: 35
Your guess is too low

Enter your guess: 70

Your guess is too high
Enter your guess: 55

Your guess is too high
Enter your guess: 40
Your guess is too low

Enter your guess: 45

Your guess is too high
Enter your guess: 44

Your guess is too high
Enter your guess: 43

Your guess is too high
Enter your guess: 42


Yes, the number is 42*/



/*Output 2 - Guess the number between 0 to 100
Enter your guess: 50

Your guess is too high
Enter your guess: 25

Your guess is too high
Enter your guess: 12
Your guess is too low

Enter your guess: 20

Your guess is too high
Enter your guess: 16*/



/*Output 3 - Guess the number between 0 to 100
Enter your guess: -2
Your guess is too low

Enter your guess: -255
Your guess is too low

Enter your guess: 305205

Your guess is too high
Enter your guess: 30
Your guess is too low

Enter your guess: 50
Your guess is too low

Enter your guess: 60
Your guess is too low

Enter your guess: 70

Your guess is too high
Enter your guess: 65
Your guess is too low

Enter your guess: 67
Your guess is too low

Enter your guess: 68


Yes, the number is 68*/



/*Output 4 - Guess the number between 0 to 100
Enter your guess: 45

Your guess is too high
Enter your guess: 45

Your guess is too high
Enter your guess: 45

Your guess is too high
Enter your guess: 45

Your guess is too high
Enter your guess: 45

Your guess is too high
Enter your guess: 30

Your guess is too high
Enter your guess: 20

Your guess is too high
Enter your guess: 15
Your guess is too low

Enter your guess: 18

Your guess is too high
Enter your guess: 17

Your guess is too high
Enter your guess: 16


Yes, the number is 16*/
