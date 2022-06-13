/*In this program, I will be calculating the total cost of a circuit board that
cost $14.95. The company sells it for 35% profit*/

#include <iostream>
#include <iomanip>
using namespace std;
int main() {

    //Hard-coding the variables that were given to us
    int ProfitPercent = 35;
    double Cost = 14.95;

    //This equation takes 35% of $14.95 and adds that back to $14.95
    double SellingCost = ((ProfitPercent + 100) * Cost) / 100;

    //This statement makes it so I display 2 decimal points outward
    cout << setprecision(2) << fixed;

    //This statement displays the original price of the circuit board
    cout << "The selling price of a circuit board that cost $14.95 is $" << SellingCost << endl;


    return 0;
}

/*Output - The selling price of a circuit board that cost $14.95 is $20.18 */
