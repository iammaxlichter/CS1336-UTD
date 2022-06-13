/*This program gets an input from the user for the number of spools, how many are in Stock, shipping and handling,
and adds everything to get a total cost*/

#include <iostream>
#include<iomanip>

using namespace std;

void takeInput(int*& Orders, int*& Stock, char*& SpecialShipping,double*& Shipping); //PT
void display(int Orders, int Stock, double Shipping); //PT

//This function gets the Orders, Stock, shipping, and special handling from the user
void takeInput(int* Orders, int* Stock, char* SpecialShipping,double* Shipping){

    //This while loop runs to get the number of spools to be ordered. If the user types in a number < 1, the loop will run again and again
    while(true){

        cout << "Spools to be ordered";
        cin >> *Orders;
        cout << "\n";

        if(*Orders < 1){
            cout<<"Spools order must be 1 or more" << endl;
            }

        else{
            break;
        }
      }

    //This while loop runs to get the number of spools in stock. If the user types in a number <01, the loop will run again and again
    while(true){

        cout << "Spools in stock";
        cin >> *Stock;
        cout << "\n";

        if(*Stock < 0){
            cout << "Spools in stock must be 0 or more" << endl;
        }

        else{
            break;
        }
    }

    //Getting yes or no for special shipping and handling
    cout << "Special shipping and handling (y or n)";
    cin >> *SpecialShipping;
    cout << "\n";

    //If the user says yes, the following code will output. If the user types in a number < 1 for the shipping, the loop will keep running
    if(*SpecialShipping == 'y' || *SpecialShipping == 'Y'){
        while(true){

            cout << "Shipping and handling amount";
            cin >> *Shipping;
            cout << "\n";

            if(*Shipping < 0){
                cout << "The spool shipping and handling charge must be 0.0 or more"<<endl;
            }
            else{
                break;
            }
        }
    }
    //If the user says no, the default shipping is $12.99
    else{
        *Shipping = 12.99;
    }

}

void display(int Orders, int Stock, double Shipping){

    //Creating and initializing my backorder and ready to ship variable
    int Ready = 0;
    int Back = 0;

    //If the user orders more then they put in stock, ready to ship is equated to the stock and the back-orders are subtracted from the amount the user ordered by the stock
    if(Orders > Stock){
        Ready = Stock;
        Back = Orders - Stock;
    }

    //else, the ready to ship orders are equal to the orders the user inputted and there isn't any back-orders
    else{
        Ready = Orders;
        Back = 0;
        }

    //Calculating the sub total, cost of shipping, and then adding those together, the total cost
    double subTotal = Ready * 104.0;
    double shippingCost = Ready * Shipping;
    double totalCost = subTotal + shippingCost;

    //Displaying EVERYTHING
    cout<<"Spools ready to ship: " << Ready << endl;
    cout<<"Spools on back-order: " << Back << endl;
    cout<<"Subtotal ready to ship: $" << fixed << setw(10)  << setprecision(2) << subTotal << endl;
    cout<<"Shipping and handling:  $" << fixed << setw(10) << setprecision(2) << shippingCost << endl;
    cout<<"Total shipping charges: $" << fixed << setw(10)  << setprecision(2) << totalCost << endl;
}


int main() {
    //giving data types to the variables used
    int Orders, Stock;
    char SpecialShipping;
    double Shipping;

    //Running the functions and displaying everything from those functions
    takeInput(&Orders,&Stock,&SpecialShipping,&Shipping);
    display(Orders,Stock,Shipping);

}
