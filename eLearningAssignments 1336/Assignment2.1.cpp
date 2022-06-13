
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int Bulbs, ACPower, Fans;
    double Bulbs_On, ACPower_On, Fans_On, Unit;



    cout << "# of light bulbs: ";
    cin >> Bulbs;

    cout << "Average # of hours each bulb is ON in a day: ";
    cin >> Bulbs_On;

    cout << "AC unit's power: ";
    cin >> ACPower;

    cout << "Typical # of hours AC unit is ON in a day: ";
    cin >> ACPower_On;

    cout << "# of FANs: ";
    cin >> Fans;

    cout << "Average # of hours each Fan is ON in a day: ";
    cin >> Fans_On;

    cout << "Per-unit price of electricity: ";
    cin >> Unit;

    cout << "" << endl;


    double Bulbs_Percent = (Bulbs * Bulbs_On * 60 * 30) / 1000;
    double AC_Percent = (ACPower * ACPower_On * 30) / 1000;
    double Fans_Percent = (Fans * Fans_On *  40 * 30) / 1000;

    double Total_Electricity = (Bulbs_Percent + Fans_Percent + AC_Percent);

    double Electricity_Bill = (Total_Electricity * (Unit * .01));

    cout << fixed << setprecision(0);
    cout << "Total electricity usage: " << static_cast<double>(Total_Electricity) << " kWh" << endl;

    cout << fixed << setprecision(1);
    cout << "Bulbs: " << (Bulbs_Percent / Total_Electricity) * 100  << "% ";
    cout << "AC: " << (AC_Percent / Total_Electricity) * 100 << "% ";
    cout << "FANs: " << (Fans_Percent / Total_Electricity) * 100 << "%" << endl;
    cout << fixed << setprecision(2);
    cout << "Electricity bill for the month: $ " << Electricity_Bill << endl;

}
