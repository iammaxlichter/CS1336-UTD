/*This program increments tuition from 1 to 10 years and displays what that tuition will be as it gradually increases.
Following that, the program sums up the 4 year tuition after the 10 years into one number*/

#include <iostream>
using namespace std;
int main() {

    //creating all my variables
    int i = 0;
    double Tuition = 10000;
    int years = 1;
    double Total = 0;

    //creating a for loop that counts up from zero (i) and goes to 14
    for (i = 0 ; i < 14; i++)
    {
        //this while loop states that when i gets to 10, counting up from zero, every increment, the following code under will run
        while (i < 10)
        {
            i++;
            Tuition *= 1.05;
            cout << "Tuition after " << i << " years is " << Tuition << endl;
        }
        //this while loop states that when i is at 11 through when i goes to 14, the code under will run. Doing so, the variable "Total" will increase based off tuition at i years
        while ((i > 10) && (i < 15))
        {
            i++;
            Tuition *= 1.05;
            Total += Tuition;
        }
    }

    //outputting the final tuition from 11 years to 14 years
    cout << "\nThe four-year tuition after ten years will be " << Total << endl;;
}
