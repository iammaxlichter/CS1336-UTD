/*This program returns a value that is ten times the value of the number typed into it*/

#include <iomanip>
#include <iostream>
#include <cmath>

using namespace std;

double timesTen(double); // PT

//This function takes a number and times it by 10, then returning it
double timesTen(double InpNum){
    double times = InpNum * 10;
    return times;
}

main(){
    //Getting the input number from the user
    double Answer;
    cout << "Enter a number: ";
    cin >> Answer;

    //Setting the function equal to a variable and outputting it
    double Total = timesTen(Answer);
    cout << "The value of ten times of " << Answer << " is " << Total;
}

/*Output 1 -
Enter a number: -10
The value of ten times of -10 is -100 */

/*Output 2 -
Enter a number: 24321
The value of ten times of 24321 is 243210*/

/*Output 3 -
Enter a number: 1.2334
The value of ten times of 1.2334 is 12.334*/

/*Output 4 -
Enter a number: .123
The value of ten times of 0.123 is 1.23*/
