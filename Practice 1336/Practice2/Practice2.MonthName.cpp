/*This program generates a random month and outputs it*/

#include <iostream>
#include <iomanip>
#include <time.h>

using namespace std;
int main() {

    int i;
    //Generates a random number 1-12
    srand(time(0));
    int monthnumber = rand() % 12 + 1;

    //This block chain of if and else if statements declares that the 1-12 generated previously will correspondingly output months Jan-Dec
    if (monthnumber == 1)
    {
        cout << "Month is January" << endl;
    }
    else if (monthnumber == 2)
    {
        cout << "Month is February" << endl;
    }
    else if (monthnumber == 3)
    {
        cout << "Month is March" << endl;
    }
    else if (monthnumber == 4)
    {
        cout << "Month is April" << endl;
    }
    else if (monthnumber == 5)
    {
        cout << "Month is May" << endl;
    }
    else if (monthnumber == 6)
    {
        cout << "Month is June" << endl;
    }
    else if (monthnumber == 7)
    {
        cout << "Month is July" << endl;
    }
    else if (monthnumber == 8)
    {
        cout << "Month is August" << endl;
    }
    else if (monthnumber == 9)
    {
        cout << "Month is September" << endl;
    }
    else if (monthnumber == 10)
    {
        cout << "Month is October" << endl;
    }
    else if (monthnumber == 11)
    {
        cout << "Month is November" << endl;
    }
    else if (monthnumber == 12)
    {
        cout << "Month is December" << endl;
    }


    return 0;
}

/*Output 1 - Month is October*/

/*Output 2 - Month is September*/

/*Output 3 - Month is March*/

/*Output 4 - Month is January*/
