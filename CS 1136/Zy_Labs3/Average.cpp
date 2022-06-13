#include <iostream>
#include <iomanip>
using namespace std;
int main() {

    double num1,num2,num3,num4,num5;


    cout << "Enter 5 test grades" << endl;

    cin >> num1;
    cin >> num2;
    cin >> num3;
    cin >> num4;
    cin >> num5;

    double Average = (num1 + num2 + num3 + num4 + num5) / (5.0);

    cout << fixed << setprecision(1);
    cout << "Average: " << Average << endl;








   return 0;
}
