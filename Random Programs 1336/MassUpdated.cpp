#include <iostream>
#include <iomanip>
using namespace std;


int main() {

    const double earthAcceleration = 9.81;
	const double moonAcceleration = 1.62;
	const double venusAcceleration = 8.87;
    double earthWeight;
	double moonWeight;
	double venusWeight;
    double Kilograms;
    int i;

    cout << fixed << setprecision(3);

    cout << "Enter the mass in kg" << endl;
    cin >> Kilograms;


    if (Kilograms > 0)
    {
		cout << "The mass is " << Kilograms << " kg" << endl;
        cout << "Location    Weight (N)" << endl;


                earthWeight = Kilograms * earthAcceleration;
				moonWeight = Kilograms * moonAcceleration;
				venusWeight = Kilograms * venusAcceleration;

                cout << "Earth" << setw(17) << earthWeight << endl;
				cout << "Moon" << setw(17) << moonWeight << endl;
				cout << "Venus" << setw(17) << venusWeight << endl;

                if (earthWeight>= 1500)
                {
                    cout<<"The object is Heavy" << endl;
                }
                else if (earthWeight<= 5)
                {
                    cout<<"The object is Light" << endl;
                }


    }

    else
    {

        cout << "The mass must be greater than zero" << endl;
    }

}

