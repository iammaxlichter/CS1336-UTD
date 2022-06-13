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

/*Here is the output -

Tuition after 1 years is 10500
Tuition after 2 years is 11025
Tuition after 3 years is 11576.2
Tuition after 4 years is 12155.1
Tuition after 5 years is 12762.8
Tuition after 6 years is 13401
Tuition after 7 years is 14071
Tuition after 8 years is 14774.6
Tuition after 9 years is 15513.3
Tuition after 10 years is 16288.9

The four-year tuition after ten years will be 73717.8 */
