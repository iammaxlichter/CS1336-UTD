//This program implements bagel shop PoS
#include <iostream>
#include <iomanip>
using namespace std;

const float EVERY_BAGEL_COST = 1.99;
const float BLUE_BAGEL_COST = 1.99;
const float GARLIC_BAGEL_COST = 1.99;
const float CREAM_CHEESE_COST = 2.99;
const float COFFEE_COST = 3.99;

int main()
{
    char choice;
    int cnt;
    double total_charges = 0.0;
    double charges_every = 0.0;
    double charges_blueberry = 0.0;
    double charges_garlic = 0.0;
    double charges_cream = 0.0;
    double charges_coffee = 0.0;
    cout << fixed << showpoint << setprecision(2);



    //Here is the menu that the switch statement will chose from
    cout << "Please pick one item from the menu:" << endl << endl;
    cout << "Enter A for Everything Bagel" << endl;
    cout << "Enter B for Blueberry Bagel" << endl;
    cout << "Enter C for Garlic Bagel" << endl;
    cout << "Enter D for Cream Cheese" << endl;
    cout << "Enter E for coffee" << endl;
    cout << "Enter F for quit" << endl << endl;
    cout << "Please enter your choice of food: ";

    // get the choice
    cin >> choice;

    //This is the switch statement. If the user types any of these conditions, the following code under it will run
    //The default, meaning if the user types in something that doesn't follow any of the condition, some code will display, but the actually program won't run
    switch(choice)
    {

    case 'a':
    case 'A':
        cout << "Enter the amount of everything bagels you want ";
        cin >> cnt;
        charges_every = cnt * EVERY_BAGEL_COST;
        break;

    case 'b':
    case 'B':
        cout << "Enter the amount of blueberry bagels you want ";
        cin >> cnt;
        charges_every = cnt * BLUE_BAGEL_COST;
        break;

    case 'c':
    case 'C':
        cout << "Enter the amount of garlic bagels you want ";
        cin >> cnt;
        charges_every = cnt * GARLIC_BAGEL_COST;
        break;

    case 'd':
    case 'D':
        cout << "Enter the amount of cream cheese you want ";
        cin >> cnt;
        charges_every = cnt * CREAM_CHEESE_COST;
        break;

    case 'e':
    case 'E':
        cout << "Enter the amount of coffee you want ";
        cin >> cnt;
        charges_every = cnt * COFFEE_COST;
        break;

    case 'f':
    case 'F':
        cout << "You didn't order anything, Goodbye!";
        break;

    default :
        cout << "Enter a choice between A to F" << endl;
        break;

    }


    //calculates and displays total charges
    total_charges = charges_every + charges_coffee +
                    charges_cream + charges_blueberry +
                    charges_garlic ;

    cout << "\nTotal charges are: $" << total_charges << endl;

    return 0;
}

/* This is the output -

Please pick one item from the menu:
Enter A for Everything Bagel
Enter B for Blueberry Bagel
Enter C for Garlic Bagel
Enter D for Cream Cheese
Enter E for coffee
Enter F for quit

Please enter your choice of food: a
Enter the count = 34
charges_every: $67.66

Please pick one item from the menu:
Enter A for Everything Bagel
Enter B for Blueberry Bagel
Enter C for Garlic Bagel
Enter D for Cream Cheese
Enter E for coffee
Enter F for quit

Please enter your choice of food: 5
Enter a letter A-F, Please pick one item from the menu:
Enter A for Everything Bagel
Enter B for Blueberry Bagel
Enter C for Garlic Bagel
Enter D for Cream Cheese
Enter E for coffee
Enter F for quit

Please enter your choice of food: b
Enter the count = 2
charges_blueberry: $3.98

Please pick one item from the menu:
Enter A for Everything Bagel
Enter B for Blueberry Bagel
Enter C for Garlic Bagel
Enter D for Cream Cheese
Enter E for coffee
Enter F for quit

Please enter your choice of food: f

Total charges are: $71.64

Process returned 0 (0x0)   execution time : 8.975 s
Press any key to continue. */

