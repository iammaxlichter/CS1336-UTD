/*This program takes the wholesale price of an item and the markup percentage, then returns back the retail price*/

#include <iomanip>
#include <iostream>
#include <cmath>

using namespace std;

double calculateRetail(double); //PT

//This function takes the price and markup percentage and calculates then what the price would be
double calculateRetail(double price, double markup){
    double percentage = (markup / 100) + 1;
    double total = price * percentage;
    return total;
}

main(){
    //Getting the wholesale price of the item
    double customer;
    cout << "Enter the item's wholesale cost: ";
    cin >> customer;

    //Getting the markup percentage of the item
    double customermarkup;
    cout << "Enter the item's markup percentage: ";
    cin >> customermarkup;

    //Putting the function in a variable to display it easier with the two inputted values ran as arguments, then displaying the retail price
    double Total = calculateRetail(customer, customermarkup);
    cout << "The item's retail price is $" << setprecision(2) << fixed << Total;
}

/*Output 1 -
Enter the item's wholesale cost: 7
Enter the item's markup percentage: 50
The item's retail price is $10.50*/

/*Output 2 -
Enter the item's wholesale cost: 2
Enter the item's markup percentage: 2
The item's retail price is $2.04*/

/*Output 3 -
Enter the item's wholesale cost: 100
Enter the item's markup percentage: 125
The item's retail price is $225.00*/

/*Output 4 -
Enter the item's wholesale cost: 244
Enter the item's markup percentage: 543
The item's retail price is $1568.92*/
