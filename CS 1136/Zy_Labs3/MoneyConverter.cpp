#include <iostream>
#include <iomanip>
using namespace std;
int main() {

    cout << fixed << setprecision(2);

    double Dollars;
    cout << "Enter the amount in dollars" << endl;
    cin >> Dollars;

    const double Yen = (Dollars * 113.27);
    const double Euros = (Dollars * .84);
    const double Pesos = (Dollars * 19.73);

    cout << "        Dollars            Yen          Euros          Pesos" << endl;
    cout << setw(15) << Dollars << setw(15) << Yen << setw(15) << Euros << setw(15) << Pesos << endl;

   return 0;
}
