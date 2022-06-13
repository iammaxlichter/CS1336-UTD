/*In this program I will be displaying the total cost of a meal that cost a base $88.67 before a 6.75% tax
and a 20% tip. I will display the total tip money, tax amount, and total ending bill*/

#include <iostream>
#include <iomanip>
using namespace std;
int main() {

    //Hard-coding the variables that were given
    double MealCharge = 88.67;
    double Tax = .0675;
    double Tip = .2;

    //Creating new variables that use simple math operators to calculate
    double TaxCost = MealCharge * Tax;
    double MealAfterTax = MealCharge + TaxCost;
    double TipCost = MealAfterTax * Tip;
    double MealAfterTip = MealAfterTax + TipCost;

    //This makes it so it only goes to two decimal places (cents)
    cout << setprecision(2) << fixed;

    //These are the output statements displaying all of the variables I created.
    cout << "The base price of the meal was $" << MealCharge << endl;
    cout << "The 6.75% tax on the meal equated to $" << TaxCost << endl;
    cout << "The meal with tax included cost $" << MealAfterTax << endl;
    cout << "The 20% tip on the meal equated to $" << TipCost << endl;
    cout << "The meal with the tip and tax included cost a total of $" << MealAfterTip << endl;

    return 0;
}

/*Output - The base price of the meal was $88.67
The 6.75% tax on the meal equated to $5.99
The meal with tax included cost $94.66
The 20% tip on the meal equated to $18.93
The meal with the tip and tax included cost a total of $113.59 */
