#include <stdlib.h>
#include <iostream>
#include <time.h>
using namespace std;

int main()
{

    //Getting our random 2 digit number and creating our user input varaible
    srand(time(NULL));
    int LN = rand() % (100 - 10 + 1) + 10;
    int User;

    //Getting our input from the user
    cout << "Enter the digit you are guessing for the lottery!: ";
    cin >> User;
    cout << "\n";

    //Creating a way to calculate where there are numbers that the user sent in the actual lottery number through modulus and integer divide
    int LN1 = LN / 10;
    int LN2 = LN % 10;
    int User1 = User / 10;
    int User2 = User % 10;

    //This if statement says that if the user guesses the lottery number spot on, they win $10000
    if (User == LN)
    {
        cout << "Congrats, you won the lottery! Here is $10000" << endl;
    }

    //This else if statement says that if the user has the lottery numbers in reverse locations, they still win $3000
    else if ((User1 == LN2) && (User2 == LN1))
    {
        cout << "The lottery number was: " << LN << " You win $3000!" << endl;
    }

    //These two else if statements are saying that if the user guesses that there is any digit in the lottery number, they still win $1000
    else if ((User1 == LN1) || (User1 == LN2) || (User2 == LN1) || (User2 == LN2))
    {
        cout << "The lottery number was " << LN << " You won $1000" << endl;
    }
    else if ((LN1 == User1) || (LN2 == User1) || (LN1 == User2) || (LN2 == User2))
    {
        cout << "The lottery number was " << LN << " You won $1000" << endl;
    }

    //This else statement says that if the number didn't relate to the lottery number at all, you didn't win anything
    else
    {
        cout << "The lottery number was: " << LN << endl;
        cout << "You didn't win anything, better luck next time" << endl;
    }

    return 0;
}
