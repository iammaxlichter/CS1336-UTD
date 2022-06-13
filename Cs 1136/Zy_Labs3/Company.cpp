#include <iostream>
#include <iomanip>
using namespace std;
int main() {


    string company;
    int shares;
    double price;
    double sale;

    cout << "Enter the name of the company" << endl;
    getline(cin, company );

    cout << "Enter shares of stock" << endl;
    cin >> shares;

    cout << "Enter purchase price" << endl;
    cin >> price;

    cout << "Enter sale price" << endl;
    cin >> sale;

    cout << "" << endl;

    cout << fixed << setprecision(2);

    const double tax = .035;

    double CostOfStock = shares * price;
    double CostOfCommission = CostOfStock * tax;
    double TotalCost = CostOfStock + CostOfCommission;

    double IncomeFromStock = sale * shares;
    double CostOfCommission2 = IncomeFromStock * tax;
    double TotalIncome = IncomeFromStock - CostOfCommission2;

    double GainLoss = TotalIncome - TotalCost;

    cout << "Company: " << company << endl;
    cout << "Shares: " << shares << endl;

    cout << "" << endl;

    cout << "Purchase/share: $" << price << endl;
    cout << "Cost of stock: $" << CostOfStock << endl;
    cout << "Cost of commission: $" << CostOfCommission << endl;
    cout << "Total cost: $" << TotalCost << endl;

    cout << "" << endl;

    cout << "Sale/share: $" << sale << endl;
    cout << "Income from stock: $" << IncomeFromStock << endl;
    cout << "Cost of commission: $" << CostOfCommission2 << endl;
    cout << "Total income: $" << TotalIncome << endl;

    cout << "" << endl;

    cout << "Gain or loss: $" << GainLoss << endl;

       return 0;
}
