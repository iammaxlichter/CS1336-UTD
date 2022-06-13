// Compute Change
#include <iostream>
using namespace std;

int main()
{
  // Receive the amount
  cout << "Enter an amount in double, for example 11.56: ";
  double amount;
  cin >> amount;

  int lastamount;
  int remainingAmount;

  remainingAmount = int(amount * 100);


  // Find the number of one dollars
  int numberOfOneDollars = remainingAmount / 100;
  lastamount = remainingAmount % 100;

  // Find the number of quarters in the remaining amount
  int numberOfQuarters = lastamount / 25;
  lastamount = lastamount - (numberOfQuarters * 25);

  // Find the number of dimes in the remaining amount
  int numberOfDimes = lastamount / 10;
  lastamount = lastamount - (numberOfDimes * 10);

  // Find the number of nickels in the remaining amount
  int numberOfNickels = lastamount / 5;
  lastamount = lastamount - (numberOfNickels * 5);

  // Find the number of pennies in the remaining amount
  int numberOfPennies = lastamount;

  // Display results
  cout << "Your amount " << amount << " consists of" << endl <<
    "  " << numberOfOneDollars << " dollars" << endl <<
    "  " << numberOfQuarters << " quarters" << endl <<
    "  " << numberOfDimes << " dimes" << endl <<
    "  " << numberOfNickels << " nickels" << endl <<
    "  " << numberOfPennies << " pennies";

  return 0;
}



/*
Enter an amount in double, for example 11.56: 11.68
Your amount 11.68 consists of
  11 dollars
  2 quarters
  1 dimes
  1 nickels
  3 pennies
*/
