/*This program reads a day and tells you what the day it is in the future*/

#include <iostream>
#include <iomanip>
using namespace std;
int main() {

    int today, future; //Creating the integers i'm reading into the program

    //Getting both the date today and the date that I'm reading into the future
    cout << "Enter today's day (0-6 corresponding to Sun-Sat): ";
    cin >> today;
    cout << "Enter the number of days elapsed since today: ";
    cin >> future;

    int futureday = ((today + future) % 7); //condensing the future day into a more manageable number



    //This block of if and else if statements declare that is the user types a number 0-6, the corresponding sun-sat day will be show
    if (today == 0)
    {
        cout << "Today is Sunday";
    }
    else if (today == 1)
    {
        cout << "Today is Monday";
    }
    else if (today == 2)
    {
        cout << "Today is Tuesday";
    }
    else if (today == 3)
    {
        cout << "Today is Wednesday";
    }
    else if (today == 4)
    {
        cout << "Today is Thursday";
    }
    else if (today == 5)
    {
        cout << "Today is Friday";
    }
        else if (today == 6)
    {
        cout << "Today is Saturday";
    }



    //this block chain of if and if else statements takes the number we obtained above and does the same thing we did for the day entered today
        if (futureday == 0)
    {
        cout << " and future day is Sunday\n";
    }
    else if (futureday == 1)
    {
        cout << " and future day is Monday\n";
    }
    else if (futureday == 2)
    {
        cout << " and future day is Tuesday\n";
    }
    else if (futureday == 3)
    {
        cout << " and future day is Wednesday\n";
    }
    else if (futureday == 4)
    {
        cout << " and future day is Thursday\n";
    }
    else if (futureday == 5)
    {
        cout << " and future day is Friday\n";
    }
        else if (futureday == 6)
    {
        cout << " and future day is Saturday\n";
    }

    return 0;
}

/*Output 1- Enter today's day: 0
Enter the number of days elapsed since today: 10
Today is Sunday and future day is Wednesday*/

/*Output 2- Enter today's day: 5
Enter the number of days elapsed since today: 20
Today is Friday and future day is Thursday*/

/*Output 3- Enter today's day: 0
Enter the number of days elapsed since today: 0
Today is Sunday and future day is Sunday*/

/*Output 4- Enter today's day: 5
Enter the number of days elapsed since today: 5
Today is Friday and future day is Wednesday*/
