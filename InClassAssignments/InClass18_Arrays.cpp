/*This program takes the user input of the user to add up a players points depending on their number */
#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    //How big the array is
    const int PLAYERS = 5;

    //Initializing the array
    int pscore[PLAYERS] = {0};
    string names[PLAYERS] = {"Barkley", "Jordan", "Curry", "Lebron", "Hakeem"};

    //Initializing my variables
    int i, score;
    int num = 1;

    //If num is greater than one, this whole loop runs. Right now, num = 1, and later in the program you can change it
    while (num >= 0) {

        //Getting the player number
        cout << "Enter the player and how much they score [player #] [amount of points]: ";
        cin >> num;

        //This segments runs a loop 4 times to place the correct player with the number that the user inputs. Once the user types in a number less than zero, it will display everything.
        if (num < 0) {
            for (i = 0; i <= 4; i++) {
                cout << names[i] << " " << pscore[i] << endl;
                }
        }

        //This segment adds up all the points to the assigned player number
        else {
            cin >> score;
            pscore[num] = pscore[num] + score;
            }
    }
    return 0;
}

/* Enter the player and how much they score [player #] [amount of points]: 1 1
Enter the player and how much they score [player #] [amount of points]: 2 2
Enter the player and how much they score [player #] [amount of points]:
3 3
Enter the player and how much they score [player #] [amount of points]: -1
Barkley 0
Jordan 1
Curry 2
Lebron 3
Hakeem 0 */


/*Enter the player and how much they score [player #] [amount of points]: -1
Barkley 0
Jordan 0
Curry 0
Lebron 0
Hakeem 0 */
