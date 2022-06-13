//This program implements bagel shop PoS
#include <iostream>
#include <iomanip>
using namespace std;


//The constant price for each item (lines 8-12)
const float EVERY_BAGEL_COST = 1.99;
const float BLUE_BAGEL_COST = 1.99;
const float GARLIC_BAGEL_COST = 1.99;
const float CREAM_CHEESE_COST = 2.99;
const float COFFEE_COST = 3.99;

int main()
{
    /*Declaring variables used to determine which product you want and how much you want of it (lines 18 and 19).
    There are also variables declares and initialized stating the amount you spend. These variables are added onto later in the program (lines 20-25) */
    char choice;
    int cnt;
    double total_charges = 0.0;
    double charges_every = 0.0;
    double charges_blueberry = 0.0;
    double charges_garlic = 0.0;
    double charges_cream = 0.0;
    double charges_coffee = 0.0;
    cout << fixed << showpoint << setprecision(2); //Shows trailing decimal points up to two

    //The menu the user is choosing from (lines 29-36).
    cout << "Please pick one item from the menu:" << endl << endl;
    cout << "Enter A for Everything Bagel" << endl;
    cout << "Enter B for Blueberry Bagel" << endl;
    cout << "Enter C for Garlic Bagel" << endl;
    cout << "Enter D for Cream Cheese" << endl;
    cout << "Enter E for coffee" << endl;
    cout << "Enter F for quit" << endl << endl;
    cout << "Please enter your choice of food: ";

    //Prompting the user to follow the menu above
    cin >> choice;


    //The user has to input a letter A - F, and if the user does not, the program prompts the user to do so (lines 41-44)
    if ((choice < 'A') || (choice > 'F'))
    {
        cout << "Enter a choice between A to F" << endl;
    }


    /* Lines 50-87 is a series of if else statements that determine what gets multiplied and what gets added to the total price. If the user inputs
    any specified letter on the menu, the program prompts the user to type in the amount of that product you desire. After the amount is inputted,
    the program multiplies it with the constant variables declared at the start of the program and puts it into a variable which is used later */
    if (choice == 'A')
    {
        cout << "Enter the amount of everything bagels you want ";
        cin >> cnt;
        charges_every = cnt * EVERY_BAGEL_COST;
    }

    else if (choice == 'B')
    {
        cout << "Enter the amount of blueberry bagels you want ";
        cin >> cnt;
        charges_every = cnt * BLUE_BAGEL_COST;
    }

    else if (choice == 'C')
    {
        cout << "Enter the amount of garlic bagels you want ";
        cin >> cnt;
        charges_every = cnt * GARLIC_BAGEL_COST;
    }

    else if (choice == 'D')
    {
        cout << "Enter the amount of cream cheese you want ";
        cin >> cnt;
        charges_every = cnt * CREAM_CHEESE_COST;
    }

    else if (choice == 'E')
    {
        cout << "Enter the amount of coffee you want ";
        cin >> cnt;
        charges_every = cnt * COFFEE_COST;
    }
    else if (choice == 'F')
    {
        cout << "Bye!";
    }

    //This statement adds up the cost of everything that was determined in the if else statements above and prints our the total price (lines 92-96).
    total_charges = charges_every + charges_coffee +
                    charges_cream + charges_blueberry +
                    charges_garlic ;

    cout << "\nTotal charges are: $" << total_charges << endl;



    return 0;
}


/* FIRST OUTPUT

Please pick one item from the menu:

Enter A for Everything Bagel
Enter B for Blueberry Bagel
Enter C for Garlic Bagel
Enter D for Cream Cheese
Enter E for coffee
Enter F for quit

Please enter your choice of food: B
Enter the amount of blueberry bagels you want 32

Total charges are: $63.68 */


/* SECOND OUTPUT

Please pick one item from the menu:

Enter A for Everything Bagel
Enter B for Blueberry Bagel
Enter C for Garlic Bagel
Enter D for Cream Cheese
Enter E for coffee
Enter F for quit

Please enter your choice of food: D
Enter the amount of cream cheese you want 43

Total charges are: $128.57 */


/* THIRD OUTPUT

Please pick one item from the menu:

Enter A for Everything Bagel
Enter B for Blueberry Bagel
Enter C for Garlic Bagel
Enter D for Cream Cheese
Enter E for coffee
Enter F for quit

Please enter your choice of food: Hello
Enter a choice between A to F

Total charges are: $0.00 */

