#include <iostream>
using namespace std;
int main() {

    double totalMoney = 95.0; //this is the total money in which we are finding the total sales tax on
    const double stateTax = .04; //this is the state tax
    const double countyTax = .02; // this is the county tax

    double totalTax = stateTax + countyTax; //here I added the taxes together and put in into one variable for simplification
    double total_taxMoney = totalMoney * totalTax; //here is how we actually calculate the total tax

    cout << "The total amount of tax on the $95 total is $" << total_taxMoney << endl; //This line displays the total tax cost of the $95 total





   return 0;
}
